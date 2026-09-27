class Solution {
public:
    int divide(int dividend, int divisor) {

        // Overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Determine sign of answer
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Convert to positive long long values
        long long a = dividend;
        long long b = divisor;

        if (a < 0) a = -a;
        if (b < 0) b = -b;

        long long ans = 0;

        while (a >= b) {

            long long temp = b;
            long long multiple = 1;

            // Keep doubling divisor
            while ((temp << 1) <= a) {
                temp <<= 1;
                multiple <<= 1;
            }

            a -= temp;
            ans += multiple;
        }

        if (negative)
            ans = -ans;

        // Keep result inside int range
        if (ans > INT_MAX)
            return INT_MAX;

        if (ans < INT_MIN)
            return INT_MIN;

        return (int)ans;
    }
};