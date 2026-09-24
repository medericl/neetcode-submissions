class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> hash_map;

        for (string & str : strs) {
            vector<int> histogram(256, 0);
            for (char &c : str) {
                histogram[c - 'a'] += 1;
            }

            if (hash_map.contains(histogram)) {
                std::vector<string> new_vec = hash_map[histogram];
                new_vec.push_back(str);
                hash_map[histogram] = new_vec;
            }
            else
            {
                vector<string> new_vec_str = {str};
                hash_map[histogram] = new_vec_str;
            }
        }

        vector<vector<string>> res;
        for (const auto& [key, value] : hash_map)
            res.push_back(value);
        return res;
    }
};
