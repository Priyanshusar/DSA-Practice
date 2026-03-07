class Solution {
  public:
    int smallestSubstring(string S) {
        int n = S.size();
        vector<int> freq(3,0);
        
        int left = 0;
        int minLen = INT_MAX;
        
        for(int right = 0; right < n; right++)
        {
            freq[S[right]-'0']++;
            
            while(freq[0] > 0 && freq[1] > 0 && freq[2] > 0)
            {
                minLen = min(minLen, right-left+1);
                
                freq[S[left]-'0']--;
                left++;
            }
        }
        
        if(minLen == INT_MAX) return -1;
        return minLen;
    }
};