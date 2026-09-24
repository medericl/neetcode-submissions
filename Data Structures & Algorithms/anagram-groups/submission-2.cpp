class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> hash_map;

        for (const string & str : strs) {
            vector<int> histogram(26, 0);
            for (const char &c : str) {
                histogram[c - 'a'] += 1;
            }

            hash_map[histogram].push_back(str);
        }

        vector<vector<string>> res;
        for (const auto& [key, value] : hash_map)
            res.push_back(value);
        return res;
    }
};
