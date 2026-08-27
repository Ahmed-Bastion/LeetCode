class Solution {
public:
    string longestPalindrome(string s) {

        if (s.empty()) {
            return "";
        }

        int start = 0;
        int maxLen = 1;

        for (int i = 0; i < (int)s.size(); i++) {

            int left = i;
            int right = i;

            while (left >= 0 && right < (int)s.size() && s[left] == s[right]) {
                left--;
                right++;
            }

            int len1 = right - left - 1;

            if (len1 > maxLen) {
                maxLen = len1;
                start = left + 1;
            }

            left = i;
            right = i + 1;

            while (left >= 0 && right < (int)s.size() && s[left] == s[right]) {
                left--;
                right++;
            }

            int len2 = right - left - 1;

            if (len2 > maxLen) {
                maxLen = len2;
                start = left + 1;
            }
        }

        return s.substr(start, maxLen);
    }
};
