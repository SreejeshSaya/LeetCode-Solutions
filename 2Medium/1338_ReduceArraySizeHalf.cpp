class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        int target = n/2;
        map<int, int> f;
        for(int a: arr) f[a]++;
        priority_queue<int> q;
        for(pair<int, int> p: f) q.push(p.second);
        
        int c=0;
        while(n > target) {
            int x = q.top();
            q.pop();
            n -= x;
            ++c;
        }
        return c;
    }
};