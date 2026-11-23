class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>diff(n,0);
        for(int i=0;i<bookings.size();i++)
        {
            int left=bookings[i][0]-1;
            int right=bookings[i][1]-1;
            int val=bookings[i][2];
            diff[left]+=val;
            if(right+1<n)
            diff[right+1]-=val;
        }
        for(int i=1;i<n;i++)
        diff[i]+=diff[i-1];
        return diff;
    }
};