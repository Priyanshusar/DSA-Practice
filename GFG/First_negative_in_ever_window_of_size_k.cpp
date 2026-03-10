class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        
        int n = arr.size();
        vector<int> result;
        queue<int> q;
        
        int left = 0;
        
        for(int right = 0; right < n; right++)
        {
            if(arr[right] < 0)
            {
                q.push(right);
            }
            
            if(right - left + 1 == k)
            {
                if(!q.empty())
                {
                    result.push_back(arr[q.front()]);
                }
                else
                {
                    result.push_back(0);
                }
                
                if(!q.empty() && q.front() == left)
                {
                    q.pop();
                }
                
                left++;
            }
        }
        
        return result;
    }
};