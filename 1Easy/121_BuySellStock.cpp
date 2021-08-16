class Solution {
public:
    int maxProfit(vector<int>& p) {
        int minprice=INT_MAX;
        int maxProfit=0;
        for(int i=0; i<p.size(); ++i) {
            if(p[i]<minprice) minprice=p[i];
            else if(p[i]-minprice > maxProfit) maxProfit=p[i]-minprice;
        }
        return maxProfit;
    }
};