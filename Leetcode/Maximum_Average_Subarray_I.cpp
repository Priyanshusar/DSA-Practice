class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        double sum = 0;
        double maxAvg = INT_MIN;
        while(right < k)
        {
            sum+=nums[right];
            right++;
        }
        double max_sum = sum;
        while(right < nums.size())
        {
            sum+=nums[right++];
            sum-=nums[left++];
            if(sum>max_sum)
            {
                max_sum=sum;
            }
        }
        return max_sum/k;
    }
};