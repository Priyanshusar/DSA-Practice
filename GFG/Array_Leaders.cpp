

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int>nums;
        int result=arr[arr.size()-1];
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(result<=arr[i]){
                result=arr[i];
                nums.push_back(result);
            }
           
            
        }
         reverse(nums.begin(),nums.end());
        return nums;
    }
};