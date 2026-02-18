class Solution {
public:
    bool hasAlternatingBits(int n) {
        // Approach - 2 T.C --> O(1)

        unsigned int result = n ^ (n>>1);

        return (result & (result + 1) ) == 0;
    }
};
