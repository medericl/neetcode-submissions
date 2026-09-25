class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int begin = 0;
        int end = numbers.size() - 1;
        while (begin < end)
        {
            int nb_begin = numbers[begin];
            int nb_end = numbers[end];

            if (target == nb_begin + nb_end)
            {
                return {begin + 1, end + 1};
            }

            if (target > nb_begin + nb_end)
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
