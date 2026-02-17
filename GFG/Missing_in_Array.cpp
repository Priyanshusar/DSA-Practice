class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n =arr.size();
        long long totalSum = 1LL * (n+1)*(n+2)/2;
        long long sum = 0;
        for(auto  num:arr)
        {
            sum+=num;
        }
        return (int)totalSum - sum;
    }
};