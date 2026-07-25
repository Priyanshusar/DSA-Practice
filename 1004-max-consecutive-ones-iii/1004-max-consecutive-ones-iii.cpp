class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size(), left = 0, right = 0;
        int maxLen = 0, zeros = 0, idx = 0;

         while(right < n)
         {
            if(nums[right] == 0) zeros++;
            while(zeros > k)
            {
                if(nums[left] == 0)
                {
                    zeros--;    
                }
                left++;
            }
            if(zeros <= k) maxLen = max(maxLen,right-left+1);
            right++;
         }
        return maxLen;
    }
};