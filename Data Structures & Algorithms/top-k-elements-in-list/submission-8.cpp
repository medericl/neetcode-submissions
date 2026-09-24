class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map1;
        for (const int &nb : nums) {
            map1[nb]++;
        }

        map<int, vector<int>> map2;
        for (const auto& [key, val] : map1) {
            map2[-val].push_back(key);
        }

        vector <int> res;
        size_t i = 0;
        for (const auto& [key, val] : map2) {
            if (i < k)
            {
                for (const int& nb : val) {
                    res.push_back(nb);
                    i+=1;
                }
            }
        }

        return res;
    }
};
