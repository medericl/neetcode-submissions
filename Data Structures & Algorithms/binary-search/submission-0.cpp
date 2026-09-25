class Solution {
public:
    int search_(vector<int>& nums, int target, int begin, int end) {
        int mid = (begin + end) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (begin >= end) {
            return -1;
        }

        if (target > nums[mid])
        {
            return search_(nums, target, mid + 1, end);
        }
        else
        {
            return search_(nums, target, begin, mid);
        }
    }

    int search(vector<int>& nums, int target) {
        int mid = nums.size() / 2;
        if (nums[mid] == target) {
            return mid;
        }

        if (target > nums[mid])
        {
            return search_(nums, target, mid + 1, nums.size() - 1);
        }
        else
        {
            return search_(nums, target, 0, mid);
        }
    }
};
