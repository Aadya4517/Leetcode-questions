class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool even,odd;
        for(int x:nums1)
        {
            if(x%2==0)
            even=true;
            else
            odd=true;
        }
        if(even && !odd)
        return true;

        if(odd && !even)
        return true;

        if(odd && even)
        return true;

        return false;
    }
};