class Solution {
private:
    int cnt=0;
    bool v[16];
    void calculate(int n, int pos) {
        if(pos>n) { ++cnt; return; }
        for(int i=1; i<=n; ++i) {
            if(!v[i] && (pos%i==0 || i%pos==0)) {
                v[i] = true;
                calculate(n, pos+1);
                v[i] = false;
            }
        }
    }
    
public:
    int countArrangement(int n) {
        calculate(n, 1);
        return cnt;
    }
};