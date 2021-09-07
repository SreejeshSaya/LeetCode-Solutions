class Solution {
private:
    vector<vector<int>>allPaths;
    vector<int> path;
    void dfs(const vector<vector<int>> &graph, int n, int i) {
        path.push_back(i);
        if(i==(n-1)) {
            allPaths.push_back(path);
        }
        else {
            for(int node: graph[i]) {
                dfs(graph, n, node);
            }
        }
        path.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        path.reserve(n+1);
        dfs(graph, n, 0);
        return allPaths;
    }
};