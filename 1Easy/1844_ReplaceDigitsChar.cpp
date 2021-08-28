class Solution {
public:
    string replaceDigits(string s) {
        string rd = "";
        char c;
        for(int i=0; i<s.size(); ++i) {
            if(i&1) c = s[i-1] + (s[i]-'0');
            else c = s[i];
            rd.push_back(c);
        }
        return rd;
    }
};