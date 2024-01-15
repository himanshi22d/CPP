Ques: Rotate the array according to value of k

sol:
class Solution {
public:
    void reverse(vector<int>& nums,int i,int j)
    {
        while(i<j)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;

            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int i=0;
        int j=nums.size()-1;
        reverse(nums,i,j);
        reverse(nums,0,k-1);
        reverse(nums,k,j);
    }
};
