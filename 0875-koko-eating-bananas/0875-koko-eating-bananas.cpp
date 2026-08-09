class Solution {
public:

    long long fun(vector<int>& piles, int n, int speed) {

        long long hours = 0;

        for (int i = 0; i < n; i++) {

            hours += piles[i] / speed;

            if (piles[i] % speed != 0) {
                hours++;
            }
        }

        return hours;
    }


    int minEatingSpeed(vector<int>& piles, int h) {

        int n = piles.size();

        int start = 1;
        int end = *max_element(piles.begin(), piles.end());

        int ans = -1;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            long long hours = fun(piles, n, mid);

            if (hours > h) {

                start = mid + 1;
            }
            else {

                ans = mid;
                end = mid - 1;
            }
        }

        return ans;
    }
};