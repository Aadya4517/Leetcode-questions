class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0,j=0;
        int count=0;
        int ans=INT_MIN;
        unordered_map<int,int>freq;
        while(j<nums.size())
        {
            freq[nums[j]]++;
            count+=nums[j];
            while(freq[nums[j]]>1)
            {
                freq[nums[i]]--;
               
                count-=nums[i];
                 i++;
            }
            ans=max(ans,count);
            j++;
        }
        return ans;
    }
};