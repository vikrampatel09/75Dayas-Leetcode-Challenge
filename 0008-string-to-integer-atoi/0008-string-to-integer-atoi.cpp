class Solution {
public:

    int solve(string &s, int index, long long num, int sign) {

        if (index >= s.length() || !isdigit(s[index])) {

            num = num * sign;

            if (num > INT_MAX)
                return INT_MAX;

            if (num < INT_MIN)
                return INT_MIN;

            return (int)num;
        }

        int digit = s[index] - '0';

        num = num * 10 + digit;

        long long value = num * sign;

        if (value > INT_MAX)
            return INT_MAX;

        if (value < INT_MIN)
            return INT_MIN;

        return solve(s, index + 1, num, sign);
    }


    int myAtoi(string s) {

        int index = 0;

        while (index < s.length() && s[index] == ' ') {
            index++;
        }

        // Sign check
        int sign = 1;

        if (index < s.length() && s[index] == '-') {
            sign = -1;
            index++;
        }
        else if (index < s.length() && s[index] == '+') {
            index++;
        }

        return solve(s, index, 0, sign);
    }
};