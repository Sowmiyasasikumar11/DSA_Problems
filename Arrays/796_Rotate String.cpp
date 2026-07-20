class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
            return false;
        int n = s.length();
        for(int i = 0; i < n; i++) {
            if(s == goal)
                return true;
            char first = s[0];
            s = s.substr(1) + first;
        }
        return false;
    }
};