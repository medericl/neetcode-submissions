class Solution {
public:
    bool isPalindrome(string s) {
        int begin = 0;
        int end = s.size() - 1;
        while (begin < end)
        {
            while (begin < end && !isalnum(s[begin]))
            {
                begin++;
            }

            while (begin < end && !isalnum(s[end]))
            {
                end--;
            }

            if (begin < end && tolower(s[begin]) != tolower(s[end]))
            {
                return false;
            }

            end--;
            begin++;
        }
        return true;
    }
};
