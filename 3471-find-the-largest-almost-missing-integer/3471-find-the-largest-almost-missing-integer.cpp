class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> count;

        int i = 0;
        int j = 0;

        while (j < n) {

            if (j - i + 1 < k) {
                j++;
            }
            else {
                unordered_set<int> seen;

                int p = i;

                while (p <= j) {
                    seen.insert(nums[p]);
                    p++;
                }

                for (int x : seen)
                    count[x]++;

                i++;
                j++;
            }
        }

        int ans = -1;

        for (auto it : count) {
            if (it.second == 1)
                ans = max(ans, it.first);
        }

        return ans;
    }
};