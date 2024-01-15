Ques: Segregate 0's and 1's

Sol:

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int p0 = -1;
        int p1 = 0;
        
        while(p1<n)
        {
            if(arr[p1]==0)
            {
                ++p0;
                swap(arr[p0], arr[p1]);
            }
            p1++;
        }
    }
};
