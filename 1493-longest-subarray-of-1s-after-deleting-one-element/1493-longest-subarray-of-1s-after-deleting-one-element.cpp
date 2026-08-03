class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0;
        for(int i=0;i<n;i++)
        {
            int zeros = 0;
            for(int j=i;j<n;j++)
            {
                if(nums[j]==0) zeros++;
                
                if(zeros <2) maxLen = max(maxLen , j-i+1);
                else
                {
                    break;
                }
            }
        }
        return maxLen - 1;
    }
};