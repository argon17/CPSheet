int fact(int n) {
    int ans = 1;
    while (n) ans *= n--;
    return ans;
}

int rankOfWord(char *str) {
    // getting the length of string
    int len = 0;
    while (str[len] != '\0') ++len;
    // store no of occurences of each character
    int cnt[26] = {0};
    for (int i = 0; i < len; ++i)
        cnt[str[i] - 'a']++;
    // no of characters left right side to permute
    int rightSideCharsLeft = len - 1;
    int ans = 0;
    for (int i = 0; i < len; ++i) {
        char c = str[i];
        int numOfLexicographicallySmallerCharsForThisPosition = 0, rep = 1;
        for (int j = 0; j < c - 'a'; ++j)
            numOfLexicographicallySmallerCharsForThisPosition += cnt[j];
        for (int j = 0; j < 26; ++j)
            rep *= fact(cnt[j]);
        ans += numOfLexicographicallySmallerCharsForThisPosition * fact(rightSideCharsLeft) / rep;
        // now we're done with this character, decrease the count
        cnt[c - 'a']--;
        rightSideCharsLeft--;
    }
    return ans + 1;
}
