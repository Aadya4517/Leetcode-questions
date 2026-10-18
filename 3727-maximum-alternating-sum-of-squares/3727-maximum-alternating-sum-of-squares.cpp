class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long>arr;
        for(int x:nums)
        arr.push_back(x*x);
        sort(arr.begin(),arr.end());
        long long sum=0;
        int mid=n/2;
        for(int i=0;i<n;i++){
            if(i<mid)
            sum-=arr[i];
            else
            sum+=arr[i];
        }
        return sum;
    }
};