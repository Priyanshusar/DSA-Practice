class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {
        
        // convert value to index (1-based to 0-based)
        int idx = abs(arr[i]) - 1; 

        // if already visited, it's a duplicate
        if (arr[idx] > 0){
            
            // mark as visited by negating
            arr[idx] = -arr[idx]; 
        }
        else{
            ans.push_back(abs(arr[i]));
        }
    }
    return ans;
}
};