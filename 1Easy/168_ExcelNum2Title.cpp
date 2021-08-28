class Solution {
public:
    string convertToTitle(int columnNumber) {
        string title;
        char t;
        while(columnNumber) {
            --columnNumber;
            t = 'A' + columnNumber%26;
            title = t + title;
            columnNumber /= 26;
        }
        return title;
    }
};