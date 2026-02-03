class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        // If ransom note is longer than magazine, it's impossible
        if (ransomNote.size() > magazine.size())
            return false;

        // Frequency array for lowercase letters
        vector<int> freq(26, 0);

        // Count characters in magazine
        for (char ch : magazine) {
            freq[ch - 'a']++;
        }

        // Check if ransomNote can be constructed
        for (char ch : ransomNote) {
            if (freq[ch - 'a'] == 0)
                return false;
            freq[ch - 'a']--;
        }

        return true;
    }
};
