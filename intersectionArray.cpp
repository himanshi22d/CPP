Ques: Intersection of Two Arrays

sol:
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>map;

        for(int ele: nums1)
        {
            map[ele]++;
        }

        vector<int>ans;
        for(int ele: nums2)
        {
            if(map.find(ele) != map.end())
            {
                ans.push_back(ele);
                map[ele]--;
                if(map[ele] == 0)
                {
                    map.erase(ele);
                }
            }
        }
        return ans;
    }
};
