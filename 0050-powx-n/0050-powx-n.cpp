class Solution {
public:

    double power(double x, long long n) {

        if (n == 0) {
            return 1;
        }

        if (n < 0) {
            return 1 / power(x, -n);
        }

        double half = power(x, n / 2);

        if (n % 2 == 0) {
            return half * half;
        }

        return x * half * half;
    }

    double myPow(double x, int n) {

        long long N = n;

        return power(x, N);
    }
};