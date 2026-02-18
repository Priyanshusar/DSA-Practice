class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int n = arr.size();
        if(n < 2) return {-1};

        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;

        for(int num : arr) {
            if(num < smallest) {
                secondSmallest = smallest;
                smallest = num;
            }
            else if(num > smallest && num < secondSmallest) {
                secondSmallest = num;
            }
        }

        if(secondSmallest == INT_MAX)
            return {-1};

        return {smallest, secondSmallest};
    }
};
