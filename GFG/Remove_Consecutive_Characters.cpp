class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
        int n = s.size();
        string result = "";
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                continue;
            }
            else
            {
                result += s[i];
            }
        }
        return result+ s[n-1];
    }
};