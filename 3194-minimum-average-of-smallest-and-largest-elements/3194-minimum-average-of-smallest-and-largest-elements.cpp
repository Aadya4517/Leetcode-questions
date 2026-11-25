class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>avg;
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        while(left<right)
        {
            avg.push_back((nums[left]+nums[right])/2.0);
            left++;
            right--;
        }
        return *min_element(avg.begin(),avg.end());
    }
};