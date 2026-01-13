class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double low = 1e18, high = -1e18;

        // Determine search boundaries
        for (auto &sq : squares) {
            double y = sq[1];
            double side = sq[2];
            low = min(low, y);
            high = max(high, y + side);
        }

        // Binary search for the balancing y-coordinate
        for (int i = 0; i < 100; i++) {  // enough for 1e-6 precision
            double mid = (low + high) / 2.0;
            double above = 0.0, below = 0.0;

            for (auto &sq : squares) {
                double y = sq[1];
                double side = sq[2];
                double top = y + side;

                if (top <= mid) {
                    // fully below
                    below += side * side;
                } else if (y >= mid) {
                    // fully above
                    above += side * side;
                } else {
                    // intersecting
                    below += (mid - y) * side;
                    above += (top - mid) * side;
                }
            }

            if (above > below) {
                low = mid;
            } else {
                high = mid;
            }
        }

        return (low + high) / 2.0;
    }
};
