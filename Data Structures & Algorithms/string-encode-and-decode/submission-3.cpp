class Solution {
public:

    void push_nb(string &str, string &res)
    {
        string nb = to_string(str.size());
        for (const char &c : nb)
            res.push_back(c);
        res.push_back('#');
    }

    string encode(vector<string>& strs) {
        string res = "";
        for (string &str : strs)
        {
            push_nb(str, res);
            for (char &c : str)
            {
                res.push_back(c);
            }
        }
        return res;
    }


    vector<string> decode(string s) {
        std::vector<string> res;
        int i = 0;
        while (i < s.size())
        {
            std::string str;
            int nb = 0;
            while (i < s.size() && s[i] >= '0' && s[i] <= '9')
            {
                nb += s[i] - '0';
                nb *= 10;
                i++;
            }
            nb = nb / 10;
            if (s[i] == '#')
            {
                i++;
                int j = 0;
                while (j < nb)
                {
                    str.push_back(s[i]);
                    i++;
                    j++;
                }
            }
            res.push_back(str);
        }
        return res;
    }
};
