class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        vector<int> histogram(256,0);
        for (size_t i = 0; i < t.size(); i ++)
        {
            histogram[s[i]] += 1;
            histogram[t[i]] -= 1;
        }
        for (size_t j = 0; j < 256; j++)
        {
            if (histogram[j] != 0)
                return false;
        }
        return true;
    }
};

