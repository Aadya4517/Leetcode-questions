class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0, j=0;
        int maxfreq=0, count=0;
        int ans=0;
        unordered_map<char,int>freq;
        while(j<s.size())
        {
            freq[s[j]]++;
            count++;
            maxfreq=max(maxfreq,freq[s[j]]);
            if(count-maxfreq<=k)
            {
                ans=max(ans,count);
                j++;
            }
            else{
                freq[s[i]]--;
                count--;
                i++;j++;
            }
        }
        return ans;
    }
};