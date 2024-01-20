Ques: Search in rotated sorted array

class Solution {
public:
    int search(vector<int>& arr, int data) {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(arr[mid]==data)
            {
                return mid;
            }
            if(arr[s]<=arr[mid])
            {
                if(data>=arr[s]&&data<arr[mid])
                {
                    e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            }
            else
            {
                if(arr[mid]<data && data<=arr[e])
                {
                    s=mid+1;
                }
                else
                {
                    e=mid-1;
                }
            }
        }return -1;
    }
};
