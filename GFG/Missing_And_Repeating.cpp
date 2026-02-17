class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        unordered_map<int,int> mpp;
        int n = arr.size();
        
        long long totalSum = 1LL * n * (n + 1) / 2;
        long long sum = 0;
        long long repeating = 0;

        for(int num : arr) {
            mpp[num]++;
            sum += num;
            if(mpp[num] == 2)
                repeating = num;
        }

        long long gap = totalSum - sum;     // M - R
        long long missing = gap + repeating;

        return {(int)repeating, (int)missing};
    }
};
