class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int i = 0, j = 0;
        int count = 0;
        int maxcount = INT_MIN;

        while(j < nums.size())
        {
            mp[nums[j]]++;
            count++;

            while(mp[nums[j]] > k)
            {
                mp[nums[i]]--;
                count--;
                i++;
            }

            maxcount = max(maxcount, count);
            j++;
        }

        return maxcount;
    }
};