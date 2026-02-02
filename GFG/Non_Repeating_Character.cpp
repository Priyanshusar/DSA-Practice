class Solution {
public:
    char nonRepeatingChar(string &s) {
        int freq[26] = {0};

        // count frequency
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        // find first non-repeating character
        for (char ch : s) {
            if (freq[ch - 'a'] == 1)
                return ch;
        }

        return '$';
    }
};