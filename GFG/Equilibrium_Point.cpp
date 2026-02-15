class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
    int n = arr.size();
    int totalSum = 0;
    for(auto it : arr)
    {
        totalSum += it;
    }
    int leftSum = 0 , rightSum = 0;
    for(int i=0;i<n;i++)
    {
        rightSum = totalSum - leftSum - arr[i];
        if(leftSum == rightSum)
        {
            return i;
        }
        leftSum += arr[i];
    }
    return -1;
    }
};