class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++)
        {
            bool valid=true;
            int n=i;
            while(n!=0)
            {
                int temp=n%10;
                if(temp==0 || i%temp!=0)
                {
                    valid=false;
                    break;
                }
                n/=10;
            }
            if(valid)
            ans.push_back(i);
        }
        return ans;
    }
};