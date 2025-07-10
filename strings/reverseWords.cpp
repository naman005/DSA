class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int i = 0, n = s.length();

        // Skip leading spaces
        while (i < n && s[i] == ' ') i++;

        while (i < n) {
            string word;
            // Collect a word
            while (i < n && s[i] != ' ') {
                word += s[i++];
            }
            if (!word.empty()) {
                words.push_back(word);
            }

            // Skip spaces between words
            while (i < n && s[i] == ' ') i++;
        }

        // Reverse the vector of words
        reverse(words.begin(), words.end());

        // Join words with single space
        string result;
        for (int j = 0; j < words.size(); j++) {
            result += words[j];
            if (j != words.size() - 1) {
                result += ' ';
            }
        }

        return result;
    }
};
