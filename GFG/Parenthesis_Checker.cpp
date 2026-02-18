class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        int n = s.size();
        stack<char>st;
        
        if(n%2!=0)
        {
            return false;
        }
         for(char ch : s)
        {
            if( st.empty() || ch =='(' || ch =='{' || ch =='[')
            {
                st.push(ch);
                continue;
            }
            else if(ch == ')')
            {
                if(st.top() =='(') st.pop();
                else return false;
            }
            else if(ch == '}')
            {
                if(st.top() =='{') st.pop();
                else return false;
            }
            else if(ch == ']')
            {
                if(st.top() =='[') st.pop();
                else return false;
            }
            else
            {
                return false;
            }
        }
        return st.empty();
    }
};
