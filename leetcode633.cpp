class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long long a = 0; a * a <= c; ++a) {
            long long b = c - a * a;
            long long sqrt_b = static_cast<long long>(sqrt(b));
            if (sqrt_b * sqrt_b == b) {
                return true;
            }
        }
        return false;
    }
};