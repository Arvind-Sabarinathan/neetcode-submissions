class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int res = 0;

        while(l < r){
            int width = r - l;
            int height = min(heights[l], heights[r]);

            int area = width * height;
            res = max(res, area);

            if (heights[l] < heights[r]){
                l += 1;
            }
            else {
                r -= 1;
            }
        }

        return res;
    }
};
