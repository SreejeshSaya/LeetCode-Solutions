class Solution {
public:
    int longestValidParentheses(string s) {
        int left=0;
        int right=0;
        int mValid = 0;
        for(char c: s) {
            if(c =='(') ++left;
            else if(c==')') ++right;
            
            if(left == right) mValid = max(mValid, 2*right);
            else if(right > left)  left = right = 0;
        }
        
        left = right = 0;
        for(int i=s.size(); i>=0; --i) {
            char c=s[i];
            if(c =='(') ++left;
            else if(c==')') ++right;
            
            if(left == right) mValid = max(mValid, 2*left);
            else if(right < left)  left = right = 0;
        }
        
        return mValid;
    }
};

// class Solution {
// public:
//     int longestValidParentheses(string s) {
        
//         int n=s.size();
//         stack<int> st;
//         int i=0,ans=0,start=-1,fin=0;
//         while(i<n){
                        
//             if(s[i]=='(')
//                 st.push(i);
//             else{
//                 if(st.empty())
//                     start=i;
//                 else{
//                     st.pop();
//                     if(st.empty()) ans=max(ans,i-start);
//                     else ans=max(ans,i-st.top());
//                 }
//             }
//             i++;
//         }
        
//         return ans;
//     }
// };
        
        