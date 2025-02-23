class Solution {
public:
    bool hasSameDigits(std::string s) {
        while (s.length() > 2) {
            std::string newbornString;
            for (size_t i = 0; i < s.length() - 1; i++) {
                int firstDigit = s[i] - '0';               // Convert char to int
                int secondDigit = s[i + 1] - '0';          // Convert char to int
                int newDigit = (firstDigit + secondDigit) % 10; // Calculate new digit
                newbornString += std::to_string(newDigit); // Append new digit to the new string
            }
            s = newbornString;                             // Update s to the new string
        }
        // Check if the final two digits are the same
        return s[0] == s[1];
    }
};