class Solution {
public:
    bool judgeCircle(string moves) {
        int left=0;
        int right=0;
        int up=0,down=0;
        for(char c:moves)
        {
            if(c=='L')
            left++;
            else if(c=='R')
            right++;
            else if(c=='U')
            up++;
            else if(c=='D')
            down++;
        }
        int ans=abs(left-right)+abs(up-down);
        return ans==0;
    }
};