class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        vector<int> histogram(256,0);
        for (size_t i = 0; i < t.size(); i ++)
        {
            histogram[s[i]] += 1;
        }
        for (size_t i = 0; i < t.size(); i ++)
        {
            histogram[t[i]] -= 1;
            
        }
        for (size_t i = 0; i < t.size(); i ++)
        {
            char c = s.at(i);
            if (histogram[c] != 0)
                return false;
            
        }
        return true;
    }
};

