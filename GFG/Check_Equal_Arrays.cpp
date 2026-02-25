class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        
        if(a.size() != b.size())
            return false;
        
        unordered_map<int,int> mpp;
        
        for(auto it : a) {
            mpp[it]++;
        }
        
        for(auto it : b) {
            if(mpp.find(it) == mpp.end() || mpp[it] == 0) {
                return false;
            }
            mpp[it]--;
        }
        
        return true;
    }
};