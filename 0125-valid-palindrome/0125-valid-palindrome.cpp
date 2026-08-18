class Solution {
public:

    bool solve(string &s, int left, int right) {

        // Base case
        if (left >= right) {
            return true;
        }

        // Non-alphanumeric character ko skip karo
        if (!isalnum(s[left])) {
            return solve(s, left + 1, right);
        }

        if (!isalnum(s[right])) {
            return solve(s, left, right - 1);
        }

        // Lowercase karke compare karo
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        // Same hain → andar jao
        return solve(s, left + 1, right - 1);
    }

    bool isPalindrome(string s) {
        return solve(s, 0, s.length() - 1);
    }
};