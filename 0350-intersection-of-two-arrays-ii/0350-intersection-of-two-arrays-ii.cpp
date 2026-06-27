class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>result;
        unordered_map<int,int>mpp;
        for(auto it: nums1)
        {
            mpp[it]++;
        }

        for(auto it: nums2)
        {
            if(mpp[it] > 0)
            {
                mpp[it]--;
                result.push_back(it);
            }
        }
        return result;
    }
};