class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1(nums1.begin(),nums1.end());
        set<int> st2(nums2.begin(),nums2.end());
        int count1 = 0;
        int count2 = 0;
        for(int i=0;i<nums1.size();i++)
        {
            if(st2.contains(nums1[i]))
            {
                count1++;
            }
        }
        
        for(int i=0;i<nums2.size();i++)
        {
            if(st1.contains(nums2[i]))
            {
                count2++;
            }
        }
        return {count1,count2};
    }
};