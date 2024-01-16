Ques: Max Consecutive Ones

Sol:
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int si = 0;
        int ei = 0;
        int len = 0;
        int count = 0;
        int n = nums.size();

        while(ei<n)
        {
            if(nums[ei++]==0)
            {
                count++;
            }
            while(count>0)
            {
                if(nums[si++]==0)
                {
                    count--;
                }
            }
            len = max(len, ei-si);
        }
        return len;
    }
};
