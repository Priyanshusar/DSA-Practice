class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
       
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0)
            {
                res.push_back(arr[i]);
                
                
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                res.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=res[i];
        }
    }
};