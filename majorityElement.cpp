class Solution {
public:
    int majorityElement(vector<int>& a) {
        int ansIndex = 0;
        int count = 1;
        for(int i=1; i<a.size(); i++)
        {
            if(a[i] == a[ansIndex])
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count == 0)
            {
                ansIndex = i;
                count = 1;
            }

        }
        return a[ansIndex];
    }
};
