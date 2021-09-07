class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st, tt;
        for(char c: s) {
            if(c=='#') {
                if(!st.empty()) st.pop();
            }
            else st.push(c);
        }
        
        for(char c: t) {
            if(c=='#') {
                if(!tt.empty()) tt.pop();
            }
            else tt.push(c);
        }
        
        while(!st.empty() && !tt.empty()) {
            if(st.top() != tt.top()) return false;
            st.pop();
            tt.pop();
        }
        
        return st.empty() && tt.empty();
    }
};