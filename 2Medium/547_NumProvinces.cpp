class Solution {
private:
    set<int> visited;
    void dfs(vector<vector<int>> &g, int node) {
        visited.insert(node);
        
        for(int i=0; i<g.size(); ++i) {
            if( g[node][i] == 1 && visited.find(i) == visited.end() && node!=i) dfs(g, i);
        }
    }
    
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int numProvinces=0;
        int n=isConnected.size();
        for(int i=0; i<n; ++i) {
            if(visited.find(i) == visited.end()) {
                dfs(isConnected, i);
                ++numProvinces;
            }
        }
        
        return numProvinces;
    }
};