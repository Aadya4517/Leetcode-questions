
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2,
                               int k1, int k2) {
        long long k = (long long)k1 + k2;
        int n = nums1.size();
        vector<int> freq(100001, 0);
        int maxDiff = 0;

        for(int i = 0; i < n; i++) {
            int diff = abs(nums1[i] - nums2[i]);
            freq[diff]++;
            maxDiff = max(maxDiff, diff);
        }

        // If all differences can be reduced to zero
        long long totalDiff = 0;
        for(int d = 1; d <= maxDiff; d++)
            totalDiff += 1LL * d * freq[d];

        if(k >= totalDiff)
            return 0;

        // Reduce the largest differences in batches
        for(int d = maxDiff; d > 0 && k > 0; d--) {
            if(freq[d] == 0) continue;

            long long take = min(k, (long long)freq[d]);
            freq[d] -= take;
            freq[d - 1] += take;
            k -= take;
        }

        long long ans = 0;

        for(int d = 1; d <= maxDiff; d++)
            ans += 1LL * d * d * freq[d];

        return ans;
    }
};
