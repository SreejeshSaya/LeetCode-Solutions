class Solution {
private:
    vector<vector<int>> cb;
    vector<int> c;
    int N;
    int K;
    void helper(int pos) {
        c.push_back(pos);
        if(c.size() == K) { cb.push_back(c); }
        else { for(int i=pos+1; i<=N; ++i) { helper(i); } }
        c.pop_back();
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
        N = n;
        K = k;
        c.clear();
        c.reserve(k);
        for(int i=1; i<=n; ++i)  helper(i);
        return cb;
    }
};

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        int i = 0;
        vector<int> p(k, 0);
        while (i >= 0) {
            p[i]++;
            if (p[i] > n) --i;
            else if (i == k - 1) result.push_back(p);
            else {
                ++i;
                p[i] = p[i - 1];
            }
        }
        return result;
    }
};