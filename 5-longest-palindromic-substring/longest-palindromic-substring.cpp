class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0, len = 1;

        auto expand = [&](int l, int r) {
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 > len) {
                    start = l;
                    len = r - l + 1;
                }
                l--;
                r++;
            }
        };

        for (int i = 0; i < n; i++) {
            // Odd length palindrome
            expand(i, i);

            // Even length palindrome
            expand(i, i + 1);
        }

        return s.substr(start, len);
    }
};