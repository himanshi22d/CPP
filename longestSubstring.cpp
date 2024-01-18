Ques: Longest Substring Without Repeating Character

Sol:
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int si = 0;
        int ei = 0;
        int count = 0;
        int len = 0;
        int n = s.length();

        vector<int>freq(128, 0);

        while(ei<n)
        {
            if(freq[s[ei++]]++ > 0)
            {
                count++;
            }
            while(count>0)
            {
                if(freq[s[si++]]-- > 1)
                {
                    count--;
                }
            } 
            len = max(len, ei-si);          
       }
       return len;
    }
};
