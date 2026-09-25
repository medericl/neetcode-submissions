class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int begin = 0;
        int end = 0;
        unordered_map<char, int> map;
        int i = 0;
        int max = 0;
        for (const char &c : s)
        {
            if (map.contains(c) && begin <= map[c])
            {
                begin = map[c] + 1;
            }
            int length = end - begin + 1;
            max = std::max(max, length);
            map[c] = i;
            i++;
            end++;
        }
        return max;
    }
};
