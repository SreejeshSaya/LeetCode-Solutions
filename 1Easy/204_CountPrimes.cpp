class Solution {
private:
    void SoE(vector<bool> &isPrime, int i) {
        int n=isPrime.size();
        for(int j=i*i; j<n; j+=i)
            isPrime[j] = false;
    }
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool>isPrime(n, true);
        int numPrimes=1;
        int uLimit = sqrt(n);
        for(int i=3; i<n; i+=2) {
            if(isPrime[i]) {
                numPrimes++;
                if(i<=uLimit)
                    SoE(isPrime, i);
            }
        }
        return numPrimes;
    }
};
