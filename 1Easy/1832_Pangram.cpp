class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> alphabets(26, false);
        for(char c: sentence) {
            alphabets[c-'a'] = true;
        }
        
        for(bool b: alphabets) if(b==false) return false;
        
        return true;
    }
};