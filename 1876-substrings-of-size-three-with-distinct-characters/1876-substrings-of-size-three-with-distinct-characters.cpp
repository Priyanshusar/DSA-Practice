class Solution {
public:
    int countGoodSubstrings(string s) {
        int left = 0, right = 0, count = 0;
        unordered_map<char,int>mpp;
        while(right < s.size())
        {
            mpp[s[right]]++;
            while(right - left + 1 > 3)
            {
                mpp[s[left]]--;
                if(mpp[s[left]] == 0) mpp.erase(s[left]);
                left++;
            }
            if(right - left + 1 == 3)
            {
                if(mpp.size() == 3) count++;
            }
            right++;
        }
        return count;
    }
};