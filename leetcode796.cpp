class Solution {
public:
    bool rotateString(string& s, string goal) {  
        if (m != goal.size()) {
            return false;  
        }
        
        for (int k = 0; k < m; k++) {
            char firstChar = s[0];
            for (int i = 1; i < m; i++) {
                s[i - 1] = s[i];  
            }
            s[m - 1] = firstChar;  
            //cout << s << endl;
            if (s == goal) {
                return true;
            }
        }
        
        return false;
    }
};