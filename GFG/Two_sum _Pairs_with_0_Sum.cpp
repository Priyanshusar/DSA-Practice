// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        int left = 0 , right = arr.size()-1;
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        while(left<right)
        {
            int sum = arr[left] + arr[right];
            if(sum > 0)
            {
                right --;
            }
            else if(sum < 0)
            {
                left++;
            }
            else
            {
                ans.push_back({arr[left], arr[right]});
                
                // Skip duplicates
                int lval = arr[left];
                int rval = arr[right];
                
                while(left < right && arr[left] == lval) left++;
                while(left < right && arr[right] == rval) right--;
            }
        }
        return ans;
    }
};