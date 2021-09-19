class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        stack<int> st;

        for(int i=0; i<n; ++i) {
            char c = s[i];
            if(c == '(') {
                st.push(i+1);
            }
            else if(c == ')') {
                int o = st.top();
                st.pop();
                reverse(s.begin()+o, s.begin()+i);
            }
        }
        
        string ns;
        for(char c: s) {
            if(c != '(' && c != ')') ns.push_back(c);
        }
        return ns;
    }
};

// Lee's Solution: Very nice
// string reverseParentheses(string s) {
//     int n = s.length();
//     vector<int> opened, pair(n);
//     for (int i = 0; i < n; ++i) {
//         if (s[i] == '(')
//             opened.push_back(i);
//         if (s[i] == ')') {
//             int j = opened.back();
//             opened.pop_back();
//             pair[i] = j;
//             pair[j] = i;
//         }
//     }
//     string res;
//     for (int i = 0, d = 1; i < n; i += d) {
//         if (s[i] == '(' || s[i] == ')')
//             i = pair[i], d = -d;
//         else
//             res += s[i];
//     }
//     return res;
// }