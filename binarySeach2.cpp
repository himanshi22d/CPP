Ques:Find First and Last Position of Element in Sorted Array

sol:
class Solution {
public:
    int firstIndex(vector<int>& nums, int data) {
        int s = 0;
        int e = nums.size()-1;

        while(s<=e)
        {
            int mid = (s+e)/2;
            if(nums[mid] == data)
            {
                if(mid-1>=0 && nums[mid-1] == data)
                {
                    e = mid-1;
                }
                else
                {
                    return mid;
                }
            }
            else if(nums[mid] > data)
            {
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        return -1;
    }

    int lastIndex(vector<int>& nums, int data) {
        int s = 0;
        int e = nums.size()-1;

        while(s<=e)
        {
            int mid = (s+e)/2;
            if(nums[mid] == data)
            {
                if(mid+1<nums.size() && nums[mid+1] == data)
                {
                    s = mid+1;
                }
                else
                {
                    return mid;
                }
            }
            else if(nums[mid] > data)
            {
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int>ans(2,-1);
        ans[0] = firstIndex(nums, target);
        ans[1] = lastIndex(nums, target);

        return ans;
    }
};
