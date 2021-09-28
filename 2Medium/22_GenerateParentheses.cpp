class Solution {
    private:
    int N;
    string p;
    vector<string> allP;
    void pHelper(int o, int c, int i) {
        if(o==N && c==N) {
            allP.push_back(p);
            return;
        }
        
        if(o<N) {
            p[i] = '(';
            pHelper(o+1, c, i+1);
        }
        
        if(c<o) {
            p[i] = ')';
            pHelper(o, c+1, i+1);
        }
    }
    public:
    vector<string> generateParenthesis(int n) {
        p.clear();
        p.resize(2*n);
        N = n;
        pHelper(0, 0, 0);
        return allP;
    }
};