class Solution {
public:
    int maxProduct(vector<int> &A) {
        int r = A[0];
        int n(A.size());
        for (int i = 1, imax = r, imin = r; i < n; i++) {
            if (A[i] < 0) swap(imax, imin);
            imax = max(A[i], imax * A[i]);
            imin = min(A[i], imin * A[i]);
            r = max(r, imax);
        }
        return r;
    }
};


// Lee's Solution
// int maxProduct(vector<int> A) {
//     int n = A.size(), res = A[0], l = 0, r = 0;
//     for (int i = 0; i < n; i++) {
//         l =  (l ? l : 1) * A[i];
//         r =  (r ? r : 1) * A[n - 1 - i];
//         res = max(res, max(l, r));
//     }
//     return res;
// }