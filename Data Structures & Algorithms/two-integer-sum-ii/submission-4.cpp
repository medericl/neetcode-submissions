class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int begin = 0;
        int end = numbers.size() - 1;
        while (begin < end)
        {
            int nb = numbers[begin] + numbers[end];

            if (target == nb)
            {
                return {begin + 1, end + 1};
            }

            if (target > nb)
            {
                begin++;
            }
            else
            {
                end--;
            }
        }
        return {};

    }
};
