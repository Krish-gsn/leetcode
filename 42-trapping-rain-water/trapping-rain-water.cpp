class Solution {
public:
    int trap(vector<int>& height) {
        int s = 0, e = height.size() - 1;
        int leftMax = 0, rightMax = 0;
        int ans = 0;

        while (s <= e) {
            if (height[s] <= height[e]) {
                if (height[s] >= leftMax)
                    leftMax = height[s];
                else
                    ans += leftMax - height[s];

                s++;
            }
            else {
                if (height[e] >= rightMax)
                    rightMax = height[e];
                else
                    ans += rightMax - height[e];

                e--;
            }
        }

        return ans;
    }
};