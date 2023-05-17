#include "monty.h"

/**
 * free_array - frees an array
 * @array: array to be freed
 */

void free_array(char **array)
{
	int i = 0;

	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

/**
 * tokenizer - separates command given into tokens
 * @buffer: command given
 * @delim: delimiter
 * Return: pointer to array of tokens
*/
char **tokenizer(char *buffer, char *delim)
{
	char *buffer_copy = strdup(buffer);
	char *token = NULL, *tokendup = NULL;
	char **array = NULL;
	int token_counter = 0, i = 0;

	token = strtok(buffer_copy, delim);

	/*count number of tokens*/
	while (token != NULL)
	{
		token_counter++;
		token = strtok(NULL, delim);
	}
	token_counter++;

	array = malloc(sizeof(char *) * token_counter);

	if (array == NULL)
	{
		free(buffer_copy);
		exit(1);
	}

	tokendup = strtok(buffer_copy, delim);

	/*store tokens in array*/
	for (i = 0; tokendup != NULL; i++)
	{
		array[i] = strdup(tokendup);
		if (array[i] == NULL)
		{
			free_array(array);
			free(buffer_copy);
			exit(1);
		}

		tokendup = strtok(NULL, delim);
	}
	array[i] = NULL;

	free(buffer_copy);

	return (array);
}
