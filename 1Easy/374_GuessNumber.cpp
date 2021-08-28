/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=1, h=n;
        while(l<h) {
            int m = (h-l)/2 + l;
            int g = guess(m);
            if(g==0) return m;
            else if(g==1) l=m+1;
            else h=m-1;
        }
        return l;
    }
};