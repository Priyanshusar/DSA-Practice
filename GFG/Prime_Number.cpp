class Solution {
  public:
    bool isPrime(int n) {
        
        if(n <= 1) return false;   // 0 and 1 are not prime
        
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                return false;      // divisor found
            }
        }
        
        return true;   // no divisor found
    }
};
