class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r=numbers.size()-1;
        vector<int> res;
        while(l<r) {
            int m = (l+r)/2;
            if(target == numbers[l]+numbers[r]) {
                res.push_back(l+1);
                res.push_back(r+1);
                break;
            }
            else if (target < numbers[l]+numbers[r])
                r--;
            else
                l++;
        }
        return res;
    }
};