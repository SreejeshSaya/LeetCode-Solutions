class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        vector<int> ans(n1, -1);
        map<int, int> m;
        stack<int> s;
        for(int i: nums2) {
            while(!s.empty() && s.top() < i) {
                m[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        
        for(int i=0; i<n1; ++i) {
            ans[i] = (m.find(nums1[i]) != m.end()) ? m[nums1[i]] : -1;
        }
        
        return ans;
    }
};