class Solution {
  public:
    int closest3Sum(vector<int> &arr, int target) {
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        int diff = INT_MAX;
        int ans = 0;
        
        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;
            
            while (j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                int currDiff = abs(sum - target);
                
                if (currDiff < diff || 
                   (currDiff == diff && sum > ans)) {
                    diff = currDiff;
                    ans = sum;
                }
                
                if (sum > target)
                    k--;
                else if (sum < target)
                    j++;
                else
                    return sum;  // exact match
            }
        }
        return ans;
    }
};
