class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxwater = 0;

        while (left < right) {
            int widths = right - left;
            int heights = min(height[left], height[right]);
            int area = widths * heights;

            maxwater = max(area, maxwater);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxwater;
    }
};
