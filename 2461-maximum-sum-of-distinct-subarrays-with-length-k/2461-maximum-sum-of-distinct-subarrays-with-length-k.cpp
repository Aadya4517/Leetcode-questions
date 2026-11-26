class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       long long sum=0;
       long long maxsum=0;
       int i=0;
       int j=0;
       unordered_map<int,int>mp;
       int count=0;
       while(j<nums.size())
       {
        count++;
        sum+=nums[j];
        mp[nums[j]]++;
        if(count==k)
        {
            if(mp.size()==k)
            maxsum=max(maxsum,sum);
            sum-=nums[i];
            mp[nums[i]]--;
            if(mp[nums[i]]==0)
            mp.erase(nums[i]);
            count--;
            i++;
        }
        j++;
       } 
       return maxsum;
    }
};