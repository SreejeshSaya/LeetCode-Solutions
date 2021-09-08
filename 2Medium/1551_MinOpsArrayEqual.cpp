class Solution {
public:
    int minOperations(int n) {
        int j=0;
        int ops=0;
        for(int i=0; i<(n/2); ++i) ops += n - (2*j++ + 1);
        return ops;
    }
};

// Better
class Solution {
public:
    int minOperations(int n) {
        return n * n / 4;
    }
};