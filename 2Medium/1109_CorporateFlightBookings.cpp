class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> seats(n+1);
        for(vector<int> b: bookings) {
            seats[b[0]-1] += b[2];
            seats[b[1]] -= b[2];
        }
        for(int i=1; i<n; ++i) {
            seats[i] += seats[i-1];
        }
        seats.pop_back();
        return seats;
    }
};