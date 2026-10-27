class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0,count1=0;
        int i=0,j=0;
        unordered_map <char,int> mp;
        while(j<s.size())
        {
            mp[s[j]]++;
            count++;
            if(count==3)
            {
               if(mp.size()==3)
                count1++;
                mp[s[i]]--;
                if(mp[s[i]]==0)
                mp.erase(s[i]);
                count--;
                i++;
            }
            j++;
        }
        return count1;
    }
};