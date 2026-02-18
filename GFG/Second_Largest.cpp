class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int largest = arr[0];
        int slargest = -1;
        for(int i=1;i<n;i++)
        {
            if(largest < arr[i] && slargest!=largest)
            {
                slargest = largest;
                largest = arr[i];
            }
            else if(largest != arr[i] && slargest < arr[i])
            {
                slargest = arr[i];
            }
        }
    return slargest;
    }
};