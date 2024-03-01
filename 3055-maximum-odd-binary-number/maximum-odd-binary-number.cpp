class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones_count = 0;
        for (char c : s) {
            if (c == '1') {
                ones_count++;
            }
        }
        
        int len = s.length();
        stringstream stb;
        
        // Append '1' (count - 1) times
        for (int i = 0; i < ones_count - 1; i++) {
            stb << '1';
        }
        
        // Append '0' (len - count) times
        for (int i = 0; i < len - ones_count; i++) {
            stb << '0';
        }
        
        // Append the last '1'
        stb << '1';
        
        // Convert stringstream to string
        return stb.str();
    }
};
