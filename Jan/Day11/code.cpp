class Solution {
public:
    vector<int> NSR(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        int pseudo_index = n;
        vector<int> right(n);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if (st.empty())
                right[i] = pseudo_index;
            else
                right[i] = st.top();

            st.push(i);
        }
        return right;
    }

    vector<int> NSL(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        int pseudo_index = -1;
        vector<int> left(n);

        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if (st.empty())
                left[i] = pseudo_index;
            else
                left[i] = st.top();

            st.push(i);
        }
        return left;
    }

    int MAH(vector<int>& heights) {
        int n = heights.size();
        vector<int> right = NSR(heights);
        vector<int> left = NSL(heights);

        int max_area = 0;
        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            max_area = max(max_area, width * heights[i]);
        }
        return max_area;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;

        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> height(m, 0);

        int maxA = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                height[j] = (matrix[i][j] == '1') ? height[j] + 1 : 0;
            }
            maxA = max(maxA, MAH(height));
        }
        return maxA;
    }
};
