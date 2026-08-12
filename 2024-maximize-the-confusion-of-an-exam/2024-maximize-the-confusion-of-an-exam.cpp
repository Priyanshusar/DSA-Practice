class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {

        int n = answerKey.size();
        int left = 0, right = 0;
        int maxLen = 0;
        int countT = 0;
        int countF = 0;
        while (right < n) {
            if (answerKey[right] == 'T')
                countT++;
            else
                countF++;

            // Number of changes needed
            // = smaller frequency
            while (min(countT, countF) > k) {
                if (answerKey[left] == 'T')
                    countT--;
                else
                    countF--;

                left++;
            }
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        return maxLen;
    }
};