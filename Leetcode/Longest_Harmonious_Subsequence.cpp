 class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto it : nums)
        {
            mpp[it]++;
        }

        int maxx = 0;
        for(auto it : mpp)
        {
            if(mpp.find(it.first + 1) != mpp.end())
            {
                maxx=max(maxx, it.second+mpp[it.first + 1]);
            }
        }

        return maxx;
    }
};