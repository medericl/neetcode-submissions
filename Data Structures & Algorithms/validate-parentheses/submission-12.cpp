class Solution {
public:
    bool is_par(char c)
    {
        return (c == '(' || c == '{' || c == '[');
    }

    bool is_par2(char c)
    {
        return (c == ')' || c == '}' || c == ']');
    }

    bool isValid(string s) {
        if (s.size() == 0)
            return true;

        stack<char> q;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (is_par(c)) {
                q.push(c);
            }
            else if (is_par2(c)) {
                if (!q.empty())
                    std::cout << q.top() << "\n";
                if (q.empty())
                    return false;
                if ((q.top() == '{' && c != '}')|| (q.top() == '(' && c != ')') || q.top() == '[' && c != ']') {
                    return false;
                }

                q.pop();
                
            }
        }
        
        return q.empty();
    }
};
