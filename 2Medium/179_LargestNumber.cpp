class Solution {
private:
    static bool stringCmp(string a, string b) {
        string x = a+b;
        string y = b+a;
        return x.compare(y) > 0;
    }

public:
    string largestNumber(vector<int>& nums) {
        vector<string> s;
        for(int i: nums) s.push_back(to_string(i));
        sort(s.begin(), s.end(), stringCmp);
        if(s[0] == "0") return "0";
        string n;
        for(string i: s) n.append(i);
        return n;
    }
};