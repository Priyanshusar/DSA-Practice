class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0;
        int left = 0, right = 0,zeros = 0;
        while(right < n)
        {
            if(nums[right] == 0) zeros ++;
            while(zeros > 1)
            {
                if(nums[left] == 0)
                {
                    zeros --;
                }
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        return maxLen - 1;
    }
};