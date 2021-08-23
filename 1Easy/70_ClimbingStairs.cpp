class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        vector<int> steps(n+1, 0);
        steps[1] = 1;
        steps[2] = 2;
        for(int i=3; i<=n; ++i) {
            steps[i] = steps[i-1] + steps[i-2];
        }
        return steps[n];
    }
};

// Constant Space Complexity
public int climbStairs(int n) {
    if(n <= 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 2;
    
    int one_step_before = 2;
    int two_steps_before = 1;
    int all_ways = 0;
    
    for(int i=2; i<n; i++){
        all_ways = one_step_before + two_steps_before;
        two_steps_before = one_step_before;
        one_step_before = all_ways;
    }
    return all_ways;
}