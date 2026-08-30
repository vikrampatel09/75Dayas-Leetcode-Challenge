/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:

    int solveUsingRec(int start, int end) {

        if(start > end) {
            return -1;
        }

        int mid = start + (end - start) / 2;

        int ans = guess(mid);

        if(ans == 0) {
            return mid;
        }

        else if(ans == -1) {
        
            return solveUsingRec(start, mid - 1);
        }

        else {
        
            return solveUsingRec(mid + 1, end);
        }
    }

    int guessNumber(int n) {
        return solveUsingRec(1, n);
    }
};