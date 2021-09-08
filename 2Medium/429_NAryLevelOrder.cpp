/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> levels;
        vector<int> level;
        while(!q.empty()) {
            int n=q.size();
            for(int i=0; i<n; ++i) {
                Node* r=q.front();
                q.pop();
                level.push_back(r->val);
                for(Node* n: r->children) { q.push(n); }
            }
            levels.push_back(level);
            level.clear();
        }
        return levels;
    }
};