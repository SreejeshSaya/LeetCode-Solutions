// class Solution:
//     def lengthOfLastWord(self, s: str) -> int:
//         words = s.rstrip().split(' ')
//         return len(words[-1])


class Solution {
public:
    int lengthOfLastWord(string s) { 
        int tail = s.length() - 1;
        while (tail >= 0 && s[tail] == ' ') tail--;

        int end = tail;
        while (tail >= 0 && s[tail] != ' ') tail--;
        
        return end - tail;
    }
};