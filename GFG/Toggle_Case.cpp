class Solution {
  public:
    string toggleCase(string &s) {
        // code here
        string result="";
        for(char c : s)
        {
            if(islower(c))
            {
                result+=toupper(c);
            }
            else
            {
                result+=tolower(c);
            }
        }
        return result;
    }
};