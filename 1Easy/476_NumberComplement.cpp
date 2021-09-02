class Solution {
public:
    int findComplement(int num) {
        int n = log2(num);
        return ~num & ((1<<n)-1);
        
    }
};