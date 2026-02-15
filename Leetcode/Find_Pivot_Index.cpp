class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    // Optimized Version --> S.C--> O(1)

    int n = nums.size();
    int totalSum = 0;
    for(auto it : nums)
    {
        totalSum += it;
    }
    int leftSum = 0 , rightSum = 0;
    for(int i=0;i<n;i++)
    {
        rightSum = totalSum - leftSum - nums[i];
        if(leftSum == rightSum)
        {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
    }
};