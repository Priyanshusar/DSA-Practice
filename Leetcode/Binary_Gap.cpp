class Solution {
public:
    int binaryGap(int n) {
        int currBit = 0;
        int prevBit = -1;
        int result = 0;

        while(n > 0) {
            if(n & 1) {   // if last bit is 1
                if(prevBit != -1) {
                    result = max(result, currBit - prevBit);
                }
                prevBit = currBit;  // move this OUTSIDE
            }
            currBit++;
            n >>= 1;
        }
        return result;
    }
};