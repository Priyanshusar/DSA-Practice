class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        
        // Approach -1 Sorting
        
        // Approach -2 Hashing
        vector<int>freq(26);
        
        for(int i=0;i<s1.size();i++)
        {
            freq[s1[i]-'a']++;
        }
        
         for(int i=0;i<s2.size();i++)
        {
            freq[s2[i]-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(freq[i]%2!=0)
            {
                return false;
            }
        }
        return true;
    }
};