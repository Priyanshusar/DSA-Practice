// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
        vector<long long >ans(N,0);
        for(int i=0;i<K;i++)
        {
            ans[i] = GeekNum[i];
        }
        
        long long sum = 0;
        int left = 0, right = 0;
        
        while(right < K)
        {
            sum += ans[right];
            right++;
        }
        
        while(right < K + (N-K))
        {
            ans[right] = sum;
            sum += ans[right];
            right++;
            sum -= ans[left];
            left++;
        }
        return ans[N-1];
    }
};
