class Solution {
public:

    void solve(vector<char>& s, int start, int end) {

        // Base case
        if (start >= end) {
            return;
        }

        // Swap first and last
        swap(s[start], s[end]);

        solve(s, start + 1, end - 1);
    }

    void reverseString(vector<char>& s) {

        int n = s.size();

        solve(s, 0, n - 1);
    }
};