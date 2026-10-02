class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int>ans;
        int duplicates=0;
        int unique=0;

        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
        for(auto x:mp)
        {
           duplicates+=x.second/2;
           unique+=x.second%2;
        }
        ans.push_back(duplicates);
        ans.push_back(unique);
        return ans;
    }
};