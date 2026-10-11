class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
      int n=nums.size();
      int sum=0;
      int num;
      for(int i=1;i<=n;i++)
      {
        num=nums[i-1];
        if(n%i==0)
        {
            sum+=num*num;
        }
      }
      return sum;  
    }
};