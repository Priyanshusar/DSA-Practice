class Solution {
public:
    bool checkIfExist(vector<int>& arr) {

        unordered_map<int,int> mpp;

        for(auto it : arr)
            mpp[it]++;

        for(int i = 0; i < arr.size(); i++)
        {
            int target = 2 * arr[i];

            if(mpp.find(target) != mpp.end())
            {
                if(arr[i] != 0)
                    return true;

                if(arr[i] == 0 && mpp[0] > 1)
                    return true;
            }
        }

        return false;
    }
};