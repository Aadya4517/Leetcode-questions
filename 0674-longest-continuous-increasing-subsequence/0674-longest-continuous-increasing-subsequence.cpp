class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int start=0;
        int maxlength=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>=nums[i])
            start=i;
            int currentlength=i-start+1;
            maxlength=max(currentlength,maxlength);
        }
        return maxlength;
    }
};