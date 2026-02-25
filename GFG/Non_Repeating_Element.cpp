
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // Complete the function
        unordered_map<long,long>mpp;
        
        for(auto it : arr)
        {
            mpp[it]++;
        }
        
        for(auto it : arr) {
            if(mpp[it] == 1) {
                return it;
            }
        }
        return 0;
    }
};
