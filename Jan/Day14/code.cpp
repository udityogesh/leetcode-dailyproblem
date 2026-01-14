class Solution {
public:
    // ---------- Event ----------
    struct Event {
        int y;
        int type;   // +1 = enter, -1 = exit
        int x;
        int side;
    };

    // ---------- Segment Tree ----------
    struct SegmentTree {
        int n;
        vector<int> coverCount;
        vector<double> coveredLen;
        vector<int> xs;

        SegmentTree(const vector<int>& xs) {
            this->xs = xs;
            n = xs.size() - 1;          // number of x-intervals
            coverCount.assign(4 * n, 0);
            coveredLen.assign(4 * n, 0.0);
        }

        void update(int node, int left, int right,
                    int ql, int qr, int delta) {

            // no overlap
            if (qr <= left || right <= ql) return;

            // fully covered
            if (ql <= left && right <= qr) {
                coverCount[node] += delta;
            } else {
                int mid = (left + right) / 2;
                update(node * 2, left, mid, ql, qr, delta);
                update(node * 2 + 1, mid, right, ql, qr, delta);
            }

            // recompute covered length
            if (coverCount[node] > 0) {
                coveredLen[node] = xs[right] - xs[left];
            } else if (left + 1 == right) {
                coveredLen[node] = 0;
            } else {
                coveredLen[node] =
                    coveredLen[node * 2] + coveredLen[node * 2 + 1];
            }
        }
    };

    // ---------- Main Function ----------
    double separateSquares(vector<vector<int>>& squares) {

        // ---- Build events and collect x-coordinates ----
        vector<Event> events;
        set<int> xSet;

        for (auto& s : squares) {
            int x = s[0], y = s[1], side = s[2];
            events.push_back({y, 1, x, side});           // enter
            events.push_back({y + side, -1, x, side});  // exit
            xSet.insert(x);
            xSet.insert(x + side);
        }

        // ---- Coordinate compression ----
        vector<int> xs(xSet.begin(), xSet.end());
        unordered_map<int, int> xIndex;
        for (int i = 0; i < xs.size(); i++) {
            xIndex[xs[i]] = i;
        }

        // sort events by y
        sort(events.begin(), events.end(),
             [](const Event& a, const Event& b) {
                 return a.y < b.y;
             });

        // ---- First sweep: total union area ----
        SegmentTree st(xs);
        double totalArea = 0.0;

        int prevY = events[0].y;

        for (auto& e : events) {
            int currY = e.y;
            totalArea += st.coveredLen[1] * (currY - prevY);

            st.update(
                1, 0, st.n,
                xIndex[e.x],
                xIndex[e.x + e.side],
                e.type
            );

            prevY = currY;
        }

        double half = totalArea / 2.0;

        // ---- Second sweep: find y where area = half ----
        st = SegmentTree(xs);
        double areaSoFar = 0.0;
        prevY = events[0].y;

        for (auto& e : events) {
            int currY = e.y;
            double width = st.coveredLen[1];
            double dy = currY - prevY;

            // half reached inside this strip
            if (areaSoFar + width * dy >= half) {
                return prevY + (half - areaSoFar) / width;
            }

            areaSoFar += width * dy;

            st.update(
                1, 0, st.n,
                xIndex[e.x],
                xIndex[e.x + e.side],
                e.type
            );

            prevY = currY;
        }

        return prevY;
    }
};
