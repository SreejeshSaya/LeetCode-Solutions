// Own: slower
class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int p5= 0.05*n;
        int sum = accumulate(arr.begin()+p5, arr.end()-p5, 0);
        return (double)sum/(n-2*p5);
    }
};

// Faster
class Solution {
public:
  double trimMean(std::vector<int>& arr) {
    int trim_len = arr.size() * 0.05;
    auto it1 = arr.begin() + trim_len;
    auto it2 = arr.end() - trim_len;
    std::nth_element(arr.begin(), it1, arr.end());
    std::nth_element(it1, it2, arr.end());
    return std::accumulate(it1, it2, 0) * 1.0 / std::distance(it1, it2);
  }

};