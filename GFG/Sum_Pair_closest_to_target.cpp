class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        sort( arr.begin(), arr.end() );
        int n = arr.size();
        int left = 0 , right = n-1;
        int diff= INT_MAX;
        vector<int>result;
        
        while(left<right)
        {
            int sum = arr[left] + arr[right];
            if(abs(sum - target) < diff)
            {
                diff = min(diff, abs(sum - target));
                result = {arr[left],arr[right]};
            }
            
            if (sum > target)
                right--;
            else if (sum < target)
                left++;
            else
                return result;  // exact match
        }
        return result;
    }
};
