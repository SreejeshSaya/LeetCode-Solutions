// Dutch National Flag Partition problem

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int white, red, blue;
        red = 0;
        white = 0;
        blue = nums.size()-1;
        while(white<=blue) {
            if(nums[white]==0) {
                swap(nums[red++], nums[white++]);
            } else if(nums[white]==1) {
                ++white;
            } else {
                swap(nums[white], nums[blue--]);
            }
        }
    }
};