#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		/* Check if the current character is not a space and */
		/* either it's the first character or the previous is a space */
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
		i++;
	}
	return (count);
}

/**
 * allocate_word - Allocates memory for a single word.
 * @str: The input string.
 * @start: The starting index of the word.
 * @end: The ending index of the word.
 *
 * Return: A pointer to the allocated word.
 */
char *allocate_word(char *str, int start, int end)
{
	char *word;
	int i, length = end - start;

	word = malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);

	for (i = 0; i < length; i++)
		word[i] = str[start + i];

	word[i] = '\0';
	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of words, or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, start = -1, word_count, word_index = 0;

	if (!str || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return (NULL);

	while (str[i])
	{
		if (str[i] != ' ' && start == -1)
			start = i;
		if ((str[i] == ' ' || str[i + 1] == '\0') && start != -1)
		{
			words[word_index] = allocate_word(str, start, (str[i] == ' ') ? i : i + 1);
			if (!words[word_index])
			{
				while (word_index > 0)
					free(words[--word_index]);
				free(words);
				return (NULL);
			}
			word_index++;
			start = -1;
		}
		i++;
	}
	words[word_count] = NULL;
	return (words);
}
