class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxLength = 0;
        int maxCount = 0;
        vector<int> count(26, 0);
        int l = 0;

        for (int r = 0; r < s.length(); ++r) {
            // Increment the count of the current character and update maxCount
            maxCount = max(maxCount, ++count[s[r] - 'A']);

            // Check if the window is invalid
            // A window is invalid if the number of characters to replace (window_length - maxCount) exceeds k
            while (maxCount + k < r - l + 1) {
                // Shrink the window from the left
                --count[s[l] - 'A'];
                l++;
            }

            // Update the maximum length found so far
            maxLength = max(maxLength, r - l + 1);
        }

        return maxLength;
    }
};