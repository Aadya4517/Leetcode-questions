
class Solution {
public:
    int minInsertions(string s) {
        int open = 0;
        int ans = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                open++;
            }
            else {
                // If this ')' is not followed by another ')',
                // insert the missing ')'
                if(i + 1 < s.size() && s[i + 1] == ')') {
                    i++;
                }
                else {
                    ans++;
                }
                // Match this pair )) with an opening (
                if(open > 0) {
                    open--;
                }
                else {
                    // No opening bracket available
                    ans++;
                }
            }
        }

        return ans + 2 * open;
    }
};
