#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads and prints a text file to standard output
 * @input_filename: The name of the file to read
 * @max_letters: The maximum number of letters to read and print
 *
 * Return: The actual number of letters read and printed,
 *         or 0 if an error occurred
 */
ssize_t read_textfile(const char *input_filename, size_t max_letters)
{
	FILE *file;
	char *content_buffer;
	size_t read_count, write_count;

	if (input_filename == NULL)
		return (0);

	file = fopen(input_filename, "r");
	if (file == NULL)
		return (0);

	content_buffer = (char *)malloc(sizeof(char) * (max_letters + 1));
	if (content_buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	read_count = fread(content_buffer, sizeof(char), max_letters, file);

	if (read_count == 0)
	{
		free(content_buffer);
		fclose(file);
		return (0);
	}

	content_buffer[read_count] = '\0';

	write_count = fwrite(content_buffer, sizeof(char), read_count, stdout);

	free(content_buffer);
	fclose(file);

	if (write_count != read_count)
		return (0);

	return (read_count);
}

