class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int count=0,sum=0;
        int i=0,j=cardPoints.size()-1;
        int ans=0;
        while(count<k)
        {
            sum+=cardPoints[i];
            i++;
            count++;
        }
        ans=sum;
        count=0;
        while(count<k)
        {
            i--;
            sum-=cardPoints[i];
            sum+=cardPoints[j];
            j--;
            count++;

            ans=max(ans,sum);
        }
        return ans;
    }
};