Ques: Container With Most Water

Sol:
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int si=0;
        int ei=height.size()-1;

        while(si<ei)
        {
            int leftHeight = height[si];
            int rightHeight = height[ei];

            int area = min(leftHeight,rightHeight) * (ei-si);
            ans = max(ans,area);
            if(leftHeight < rightHeight)
            {
                si++;
            }
            else
            {
                ei--;
            }
        }
        return ans;
    }
};
