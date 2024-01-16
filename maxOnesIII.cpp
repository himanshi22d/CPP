Ques: Max Consecutive Ones III

Sol:
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int si = 0;
        int ei = 0;
        int len = 0;
        int count = 0;
        int n = nums.size();

        while(ei<n)
        {
            if(nums[ei++] == 0)
            {
                count++;
            }

            while(count>k)
            {
                if(nums[si++] == 0)
                {
                    count--;
                }
            }
            len = max(len,ei-si);
        }
        return len;
    }
};
