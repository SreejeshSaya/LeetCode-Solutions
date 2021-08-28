class Solution {
public:
    string sortSentence(string s)  {
        stringstream words(s); 
        string word;

        vector<pair<int, string>> sent;
        
        while(words >> word) {
            int len = word.size();
            int i = int(word[len-1]) - 48;
            sent.push_back({i, word.substr(0, len-1)});
        }
        
        sort(sent.begin(), sent.end());
        
        string ans = sent[0].second;
        int len = sent.size();
        for(int i=1; i<len; i++) ans += " " + sent[i].second;
        
        return ans;
    }
};