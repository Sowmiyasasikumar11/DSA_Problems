class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        int ans = 0;
        for (auto x : mp) {
            if (mp.count(x.first + 1)) {
                 ans = max(ans, x.second + mp[x.first + 1]);
            }
        }
        return ans;
    }
};
