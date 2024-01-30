class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>>ans;
        for(int i=0; i<names.size(); i++)
        {
            ans.push_back({heights[i], names[i]});
        }

        sort(ans.begin(), ans.end(), greater<>());
        vector<string>result;
        for(auto key: ans)
        {
            result.push_back(key.second);
        }
        return result;
    }
};
