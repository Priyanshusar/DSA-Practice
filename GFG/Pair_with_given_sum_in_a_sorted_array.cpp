
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int n = arr.size();
        int count=0;
        int left=0,right=n-1;
        while(left<right)
        {
            int sum = arr[left] + arr[right];
            if(sum > target) right--;
            else if(sum < target) left++;
            else
            {
                int count1=0, count2=0;
                int ele1=arr[left] ,ele2=arr[right];
                while( left<=right && arr[left]==ele1)
                {   count1++;
                    left++;
                }
                while(left<=right && arr[right]==ele2)
                {
                    count2++;
                    right--;
                }
                if(ele1==ele2) count+=count1*(count1-1)/2;
                else count+=count1 * count2;
            }
            
        }
        return count;
    }
};