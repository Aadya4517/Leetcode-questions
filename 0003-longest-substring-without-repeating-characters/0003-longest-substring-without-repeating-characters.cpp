class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int count=0;
       int i=0,j=0;
       int ans=0;
       unordered_map<char,int>mp;
       while(j<s.size())
       {
        mp[s[j]]++;
        count++;
        if(mp[s[j]==1])
        {
            ans=max(ans,count);
            j++;
        }
        else{
            while(mp[s[j]]>1)
            {
                mp[s[i]]--;
                count--;
                i++;
            }
            ans=max(ans,count);
            j++;
        }

       } 
       return ans;
    }
};