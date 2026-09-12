class Solution {
public:
    int pivot(vector<int>& nums) {
        int s = 0, e = nums.size() - 1;
        int ans = -1;

        while (s <= e) {
            int m = s + (e - s) / 2;

            if (nums[0] > nums[m]) {
                e = m - 1;
            }
            else {
                ans = m;
                s = m + 1;
            }
        }

        return ans;
    }

    int binary(vector<int>& nums, int target, int s, int e) {
        while (s <= e) {
            int m = s + (e - s) / 2;

            if (nums[m] == target) {
                return m;
            }
            else if (nums[m] > target) {
                e = m - 1;
            }
            else {
                s = m + 1;
            }
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();

        if (n == 0)
            return -1;

        int p = pivot(nums);

        // Array is not rotated
        if (p == n - 1) {
            return binary(nums, target, 0, n - 1);
        }

        // Search in first sorted part
        if (target >= nums[0] && target <= nums[p]) {
            return binary(nums, target, 0, p);
        }

        // Search in second sorted part
        if (target >= nums[p + 1] && target <= nums[n - 1]) {
            return binary(nums, target, p + 1, n - 1);
        }

        return -1;
    }
};
