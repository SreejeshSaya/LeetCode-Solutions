class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int qSize = queries.size();
        vector<int> ptCnt(qSize, 0);
        
        int i=-1;
        for(vector<int> q: queries) {
            int cnt=0;
            for(vector<int> p: points) {
                int d = (p[0] - q[0])*(p[0] - q[0]) + (p[1] - q[1])*(p[1] - q[1]);
                if(d <= (q[2]*q[2]))
                    ++cnt;
            }
            ptCnt[++i] = cnt;
        }
        return ptCnt;
    }
};