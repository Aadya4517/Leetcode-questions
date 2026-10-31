class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int sum=0;
        int i=0,j=nums.size()-1;
        int maxSum=0;
        sort(nums.begin(),nums.end());
        while(i<j)
        {
            sum=nums[i]+nums[j];
            maxSum=max(maxSum,sum);
            i++;j--;
        }
        return maxSum;
    }
};