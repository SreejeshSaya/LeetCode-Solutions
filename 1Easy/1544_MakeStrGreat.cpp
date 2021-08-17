class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        st.push(s[0]);
        int i=1; 
        int n=s.size();
        while(i<n) {
            if(st.empty())
                st.push(s[i]);
            else {   
                char c=st.top();
                if(s[i]>='a' and s[i]<='z') {
                    if(c>='A' and c<='Z' and c-'A'==s[i]-'a')
                        st.pop();
                    else st.push(s[i]);
                }
                else if(s[i]>='A' and s[i]<='Z') {
                    if(c>='a' and c<='z' and c-'a'==s[i]-'A')
                        st.pop();
                    else st.push(s[i]);
                }
            }
            ++i;
        }
        string goodString;
        if(st.empty()) return "";
        else {
            while(!st.empty()) {
                goodString.push_back(st.top());
                st.pop();
            }
        }
        reverse(goodString.begin(), goodString.end());
        return goodString;
    }
};