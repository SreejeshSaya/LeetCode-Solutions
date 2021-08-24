class Solution {
private:
    int digitCnt(int n) {
        int c=0;
        while(n) {
            c += n%10;
            n/=10;
        }
        return c;
    }
public:
    int countBalls(int lowLimit, int highLimit) {
        int dCnt[46]={0};

        for(int i=lowLimit; i<=highLimit; ++i) {
            int dc = digitCnt(i);
            dCnt[dc]++;
        }
        
        int lc = *(max_element(dCnt, dCnt+46));
        // cout << "LC: " << lc << endl;
        return lc;
        }
};