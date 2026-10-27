class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score=0;
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++)
        pq.push(nums[i]);
        for(int i=1;i<=k;i++)
        {
            long long x=pq.top();
            pq.pop();
            score+=x;
            pq.push((x+2)/3);
        }
        return score;
    }
};