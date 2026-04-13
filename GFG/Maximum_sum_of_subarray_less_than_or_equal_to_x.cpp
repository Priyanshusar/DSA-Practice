class Solution {
  public:
    long long findMaxSubarraySum(vector<int>& arr, long long x) {
        // Your code goes here
        int left = 0, right = 0;
        long long maxx = 0;
        long long sum = 0;
        

        while(right < arr.size())
        {
            sum += arr[right];
            while(sum > x  && right < arr.size())
            {
                sum -= arr[left];
                left++;
            }
            maxx = max(sum,maxx);
            right++;
        }
        return maxx;
    }
};
