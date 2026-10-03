class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum, count=0;
        for(int left=0;left<nums.size();left++)
        {
            sum=0;
            for(int i=left;i<nums.size();i++)
            {
                sum+=nums[i];
                if(sum==k)
                count++;
            }
        }
        return count;
    }
};