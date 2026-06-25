class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left = 0, right = 1, result = INT_MAX;
        int n = nums.size();
        if(n==1) return 0;
        while(right<n)
        {
            while(right - left + 1 > k)
            {
                left++;
            }
            if(right - left + 1 == k)
            {
                result = min(result , abs(nums[right] - nums[left]));
            }
            right++;
        }
        return result;
    }
};