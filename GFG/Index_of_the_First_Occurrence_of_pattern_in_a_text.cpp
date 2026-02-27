class Solution {
  public:
    int findMatching(string text, string pat) {
        int m = text.size();
        int n = pat.size();
        
        if(n == 0) return 0;
        if(m < n) return -1;
        
        for(int i = 0; i <= m - n; i++) {
            int j = 0;
            
            while(j < n && text[i + j] == pat[j]) {
                j++;
            }
            
            if(j == n) return i;
        }
        
        return -1;
    }
};