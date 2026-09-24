class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> res(2,0);
        for (int i = 0; i < nums.size(); i ++)
        {
            int nb = nums[i];
            if (!map.empty() && map.contains(target - nb)){
                res[0] = map[target - nb];
                res[1] = i;
                return res;
            }
            map[nb] = i;
        }
        return res;
    }
};

