class Solution {
public:
    int totalMoney(int n) {
        int completeWeek = n / 7;
        int leftDays = n % 7;
        int startMoney = completeWeek + 1;

        int completeWeekMoneysum = (completeWeek * (2 * 28 + (completeWeek - 1) * 7)) / 2;
        int leftDaysMoneySum = (leftDays * (2 * startMoney + (leftDays - 1) * 1)) / 2;
        
        return (completeWeekMoneysum + leftDaysMoneySum);
    }
};