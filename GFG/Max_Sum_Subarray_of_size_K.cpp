class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int currSum = 0, maxSum = INT_MIN, left = 0, right = 0;
        while(right<arr.size())
        {
            currSum += arr[right];
            if( right - left + 1 ==k)
            {
                maxSum = max(currSum , maxSum);
                currSum = currSum - arr[left];
                left++;
            }
                right++;
        }
        return maxSum;
    }
};