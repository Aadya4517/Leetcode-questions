class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int i = 0;
        int j = k;
        while (j < arr.size()) {

            if (x - arr[i] > arr[j] - x) {
                i++;
            }

            j++;
        }

        return vector<int>(arr.begin() + i,
                           arr.begin() + i + k);
    }
};