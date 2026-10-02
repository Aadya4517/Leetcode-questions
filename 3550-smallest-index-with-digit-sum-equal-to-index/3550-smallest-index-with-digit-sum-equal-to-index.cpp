class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum,num;
        for(int i=0;i<nums.size();i++){
            num=nums[i];
            sum=0;
            while(num!=0)
            {
                sum+=num%10;
                num/=10;
            }
            if(sum==i)
            return i;
        }
        return -1;
    }
};