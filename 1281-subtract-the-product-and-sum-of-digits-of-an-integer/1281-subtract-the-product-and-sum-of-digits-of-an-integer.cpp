class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1, sum=0;
        int x;
        while(n!=0)
        {
            x=n%10;
            prod*=x;
            sum+=x;
            n/=10;
            
        }
        int diff=prod-sum;
        return diff;
    }
};