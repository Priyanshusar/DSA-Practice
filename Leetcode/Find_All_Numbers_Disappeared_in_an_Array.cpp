class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n, 0);
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            freq[nums[i] - 1]++;
        }

        for(int i = 0; i < n; i++) {
            if(freq[i] == 0) {
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};