class Solution {
public:
    bool isValid(string p) {
        stack<char> s;
        for(int i=0; i<p.length(); i++)
        {
            char ch = p[i];
            if(ch == '{' || ch == '(' || ch == '[')
            {
                s.push(ch);
            }
            else
            {
                if(!s.empty())
                {
                    char top = s.top();
                    if((top == '{' && ch == '}' )||( top == '(' && ch == ')') || (ch == ']' && top == '['))
                    {
                        s.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if(s.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};
