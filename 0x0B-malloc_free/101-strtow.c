#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Helper function to count the number of words in a string
int countWords(const char *str) {
    int count = 0;
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    return count;
}

// Helper function to copy a word from the input string
char *copyWord(const char *str, int *start, int end) {
    char *word = (char *)malloc(end - *start + 1);
    if (word == NULL) {
        return NULL;
    }

    int j = 0;
    for (int i = *start; i < end; i++) {
        word[j++] = str[i];
    }

    word[j] = '\0';
    *start = end + 1;

    return word;
}

char **strtow(char *str) {
    if (str == NULL || str[0] == '\0') {
        return NULL;
    }

    int numWords = countWords(str);

    char **wordArray = (char **)malloc((numWords + 1) * sizeof(char *));
    if (wordArray == NULL) {
        return NULL;
    }

    int start = 0;
    int wordIndex = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            int j = i;
            while (str[j] != ' ' && str[j] != '\0') {
                j++;
            }
            wordArray[wordIndex++] = copyWord(str, &i, j);
            if (wordArray[wordIndex - 1] == NULL) {
                // Memory allocation failed, clean up and return NULL
                for (int k = 0; k < wordIndex - 1; k++) {
                    free(wordArray[k]);
                }
                free(wordArray);
                return NULL;
            }
        }
    }

    wordArray[numWords] = NULL;

    return wordArray;
}
