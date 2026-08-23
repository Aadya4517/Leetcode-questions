class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
        int leftsum=0,rightsum=0;
        int leftques=0, rightques=0;
        for(int i=0;i<n/2;i++)
        {
            if(num[i]=='?')
            leftques++;
            else
            leftsum+=num[i]-'0';
        }
        for(int i=n/2;i<n;i++)
        {
            if(num[i]=='?')
            rightques++;
            else
            rightsum+=num[i]-'0';
        }
        if ((leftques + rightques) % 2)
        return true;

        return 2 * (leftsum - rightsum) !=
               9 * (rightques - leftques);


    }
};