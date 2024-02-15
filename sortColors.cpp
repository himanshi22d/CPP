Ques:Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

sol:
class Solution {
public:
    void sortColors(vector<int>& arr) {
        int p0=-1;
        int p1=0;
        int p2=arr.size()-1;
        while(p1<=p2)
        {
            if(arr[p1]==0)
            {
                ++p0;
                swap(arr[p0],arr[p1]);
                p1++;
            }
            else if(arr[p1] == 2)
            {
                swap(arr[p1],arr[p2]);
                p2--;
            }
            else
            {
                p1++;
            }
        }
    }
};
