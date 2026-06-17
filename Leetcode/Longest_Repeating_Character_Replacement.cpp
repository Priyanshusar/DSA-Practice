class Solution {
public:
    int characterReplacement(string s, int k) {

        // Optimal Approach --> T.C --> O(N)   S.C --> O(26)

        int n = s.size(), left = 0, right = 0;
        int maxLen = 0, maxFreq = 0;
        int replacementsNeeded = 0;

        vector<int> freq(26, 0);

        while(right < n)
        {
            freq[s[right] - 'A']++;

            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            replacementsNeeded = (right - left + 1) - maxFreq;

            while(replacementsNeeded > k)
            {
                freq[s[left] - 'A']--;
                left++;

                // Recalculate replacementsNeeded
                replacementsNeeded = (right - left + 1) - maxFreq;
            }

            maxLen = max(maxLen, right - left + 1);

            right++;
        }

        return maxLen;
    }
};