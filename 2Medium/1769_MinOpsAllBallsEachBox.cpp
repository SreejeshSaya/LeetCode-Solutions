class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> moves(n, 0);
        moves[0] = 0;
        
        int l=0;
        int numBalls = boxes[0]-'0';
        
        for(int i=1; i<n; ++i) {
            moves[i] = l + numBalls;
            l = moves[i];
            numBalls += boxes[i]-'0';
        }
        
        int r = 0;
        numBalls = boxes[n-1]-'0';
        for(int i=n-2; i>=0; --i) {
            moves[i] += r + numBalls;
            r += numBalls;
            numBalls += boxes[i]-'0';
        }
        
        return moves;
    }
};