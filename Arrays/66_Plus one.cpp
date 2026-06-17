class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();
        vector<int> ans = digits;

        for(int i = n - 1; i >= 0; i--) {
            if(ans[i] < 9) {

                ans[i] = ans[i] + 1;
                return ans;
            }
            ans[i] = 0;
        }
        ans.insert(ans.begin(), 1);
        return ans;
    }
};