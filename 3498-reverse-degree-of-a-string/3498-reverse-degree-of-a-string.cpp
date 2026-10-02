class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            char c = s[i];
            int index='z'- c+1;
            sum = sum+index*(i+1);
        }
        return sum;
    }
};