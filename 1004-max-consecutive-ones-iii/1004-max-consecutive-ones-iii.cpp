class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0;
        int count=0,countzero=0;
        int maxcount=INT_MIN;
        while(j<nums.size())
        {
            if(nums[j]==1)
            count++;
            if(nums[j]==0)
            {
                countzero++;
                count++;
            }
            while(countzero>k)
            {
                if(nums[i]==1)
                count--;
                if(nums[i]==0)
                {
                    countzero--;
                    count--;
                }
                i++;
            }
             maxcount=max(maxcount,count);
            j++;
        }
        return maxcount;
    }
};