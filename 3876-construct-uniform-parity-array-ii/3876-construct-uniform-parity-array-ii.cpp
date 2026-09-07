class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minvalue=INT_MAX;
        for(int nums:nums1)
        {
            if(nums%2==1)
            minvalue=min(minvalue,nums);
        }
        for(int nums:nums1)
        {
            if(nums%2==0 && minvalue!=INT_MAX && nums<minvalue )
            return false;
        }
        return true;
    }
};