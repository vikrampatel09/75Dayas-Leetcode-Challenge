class Solution {
public:

    long long power(long long x, long long n) {

        if (n == 0) {
            return 1;
        }

        long long half = power(x, n / 2);

        if (n % 2 == 0) {
            return (half * half) % 1000000007;
        }
        else {
            return (x * half % 1000000007 * half) % 1000000007;
        }
    }

    int countGoodNumbers(long long n) {

        long long mod = 1000000007;

        long long evenPositions = (n + 1) / 2;
        long long oddPositions = n / 2;

        long long evenWays = power(5, evenPositions);
        long long oddWays = power(4, oddPositions);

        return (evenWays * oddWays) % mod;
    }
};