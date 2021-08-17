class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for(char c: s) {
            if(c=='(' or c=='[' or c=='{') p.push(c);
            else {
                if(p.empty()) return false;
                switch(c) {
                    case ')': { if(p.top() != '(') return false;
                                else p.pop();
                               break;
                              }
                    case '}': { if(p.top() != '{') return false;
                                else p.pop();
                               break;
                              }
                    case ']': { if(p.top() != '[') return false;
                                else p.pop();
                               break;
                              }
                }
            }
        }
        return p.empty();
    }
};