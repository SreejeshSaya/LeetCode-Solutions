class Solution {
public:
    vector<int> sumZero(int n) {
        int k=n/2;
        vector<int> v(n, 0);
        for(int i=0; i<k; ++i) {
            v[i] = (i+1);
            v[k+i]=-1*(i+1);
        }
        // if(n&1) v.push_back(0);
        return v;
    }
};