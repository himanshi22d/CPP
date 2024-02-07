class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);

        int n = s.length();
        int len = 0;
        for(int i=0; i<n; i++)
        {
            if(st.top() != -1 && s[st.top()] == '(' && s[i] == ')')
            {
                st.pop();
                len = max(len, i-st.top());
            }
            else
            {
                st.push(i);
            }
        }
        return len;
    }
};
