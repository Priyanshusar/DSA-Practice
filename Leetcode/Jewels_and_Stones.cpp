class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = jewels.size();
        int m = stones.size();
        int count = 0;
        
        vector<int> freq(256, 0);

        // Count frequency of each stone
        for(int i = 0; i < m; i++)
        {
            freq[stones[i]]++;
        }

        // Check how many jewels exist in stones
        for(int i = 0; i < n; i++)
        {
            if(freq[jewels[i]] > 0)
                count += freq[jewels[i]];
        }

        return count;
    }
};