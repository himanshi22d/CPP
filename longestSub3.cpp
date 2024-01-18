Ques: Longest Substring with At Most K Distinct Characters

Sol:
class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string &s, int k) {
        vector<int>freq(128, 0);
        int si = 0;
        int ei = 0;
        int dcount = 0;
        int len = 0;
        int n = s.length();

        while(ei<n)
        {
            if(freq[s[ei++]]++ == 0)
            {
                dcount++;
            }
            while(dcount>k)
            {
                if(freq[s[si++]]-- == 1)
                {
                    dcount--;
                }
            } 
            len = max(len, ei-si);          
       }
       return len;
    }
};
