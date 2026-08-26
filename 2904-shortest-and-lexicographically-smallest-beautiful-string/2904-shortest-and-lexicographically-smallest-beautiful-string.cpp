class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i=0,j=0;
        int count=0;
        string ans="";
        while(j<s.size())
        {
            if(s[j]=='1')
            count++;
            while(count==k)
            {
                while(i<=j&&s[i]=='0')
                i++;
                string curr=s.substr(i,j-i+1);
                if(curr.size()<ans.size()||ans==""||(curr.size()==ans.size()&&curr<ans))
                ans=curr;

                count--;
                i++;
            }
            j++;
        }
        return ans;
    }
};