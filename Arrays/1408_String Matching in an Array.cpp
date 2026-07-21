class Solution {
public:

    bool isSubstring(string text, string pattern) {
        int n = text.length();
        int m = pattern.length();
        for(int i = 0; i <= n - m; i++) {
            int j;
            for(j = 0; j < m; j++) {
                if(text[i + j] != pattern[j])
                    break;
            }
            if(j == m)
                return true;
        }
        return false;
    }
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for(int i = 0; i < words.size(); i++) {
            for(int j = 0; j < words.size(); j++) {
                if(i == j)
                    continue;
                if(isSubstring(words[j], words[i])) {
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};