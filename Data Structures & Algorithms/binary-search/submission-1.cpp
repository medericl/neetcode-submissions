class Solution {
public:
    int search_(vector<int>& nums, int target, int begin, int end) {
        if (begin > end) {
            return -1;
        }

        int mid = begin + (end - begin) / 2;
        if (nums[mid] == target) {
            return mid;
        }

        if (target > nums[mid])
        {
            return search_(nums, target, mid + 1, end);
        }
        else
        {
            return search_(nums, target, begin, mid - 1);
        }
    }

    int search(vector<int>& nums, int target) {
        return search_(nums, target, 0, nums.size() - 1);
    }
};
