Ques: Maximum Subarray

sol:
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int runningSum = 0;
        int maxSum = -(int)1e8;

        for(int ele : nums)
        {
            runningSum += ele;
            maxSum = max(runningSum,maxSum);

            if(runningSum < 0)
            {
                runningSum=0;
            }
        }
        return maxSum;
    }
};
