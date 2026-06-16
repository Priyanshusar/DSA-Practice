// Approach 1 --> Using Hash Map    TC --> O(N) SC --> O(K)
class Solution {
public:
    int longestKSubstr(string &s, int k) {

        int n = s.size(), left = 0, right = 0;
        int maxLen = -1;
        unordered_map<char,int> mpp;

        while(right < n)
        {
            mpp[s[right]]++;

            while(mpp.size() > k)
            {
                mpp[s[left]]--;

                if(mpp[s[left]] == 0)
                {
                    mpp.erase(s[left]);
                }

                left++;
            }

            if(mpp.size() == k)
            {
                maxLen = max(maxLen, right - left + 1);
            }

            right++;
        }

        return maxLen;
    }
};

// Approach 2 --> Using Frequency Array    TC --> O(N) SC --> O(1)
class Solution {
public:
    int longestKSubstr(string &s, int k) {

        int n = s.size(), left = 0, right = 0;
        int maxLen = -1;
        int unique = 0;
        vector<int> freq(26,0);

        while(right < n)
        {
             if(freq[s[right]-'a'] == 0)
                unique++;

            freq[s[right]-'a']++;

            while(unique > k)
            {
                freq[s[left] - 'a']--;

                if(freq[s[left] - 'a'] == 0)
                {
                    unique--;
                }

                left++;
            }

            if(unique == k)
            {
                maxLen = max(maxLen, right - left + 1);
            }

            right++;
        }

        return maxLen;
    }
};