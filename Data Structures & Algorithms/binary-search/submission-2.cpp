class Solution {
public:
        int search(vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size() - 1;
        while (begin <= end)
        {
            int mid = begin + (end - begin) / 2;
            if (nums[mid] == target)
                return mid;
            if (target > nums[mid])
                begin = mid + 1;
            else
                end = mid - 1;
        }

        return -1;
    }

};
