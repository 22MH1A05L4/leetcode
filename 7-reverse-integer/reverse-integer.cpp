class Solution {
public:
    int reverse(int x) {
    bool negative = x < 0;
    x = abs(x);
    long long reversed_x = 0;
    while (x != 0) {
        int digit = x % 10;
        reversed_x = reversed_x * 10 + digit;
        x /= 10;
    }
    if (negative) {
        reversed_x = -reversed_x;
    }
    if (reversed_x < INT_MIN || reversed_x > INT_MAX) {
        return 0;
    }
    
    return static_cast<int>(reversed_x);
    }
};