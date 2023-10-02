#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Print an error message to the standard error.
 *
 * @message: The error message.
 * @filename: The name of the file associated with the error.
 */
void print_error(const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
}

/**
 * open_file - Open a file with specified flags and mode.
 *
 * @filename: The name of the file to open.
 * @flags: The flags for opening the file.
 * @mode: The mode for creating the file if it doesn't exist.
 *
 * Return: The file descriptor on success, or -1 on failure.
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int file_descriptor;

	file_descriptor = open(filename, flags, mode);
	if (file_descriptor == -1)
	{
		print_error("Can't open", filename);
	}
	return (file_descriptor);
}

/**
 * read_write - Read from one file descriptor and write to another.
 *
 * @from: The source file descriptor.
 * @to: The destination file descriptor.
 * @buffer: The buffer for reading and writing.
 * @size: The size of the buffer.
 *
 * Return: The number of bytes read and written, or -1 on failure.
 */
ssize_t read_write(int from, int to, char *buffer, size_t size)
{
	ssize_t bytes_read;

	bytes_read = read(from, buffer, size);
	if (bytes_read == -1 || bytes_read != write(to, buffer, bytes_read))
	{
		return (-1);
	}
	return (bytes_read);
}

/**
 * main - Entry point of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	file_from = open_file(argv[1], O_RDONLY, 0);
	file_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	while ((bytes_read = read_write(file_from, file_to, buffer, BUFFER_SIZE)) > 0)
	{
		/* Loop through until all data is copied. */
	}

	if (bytes_read == -1)
	{
		print_error("Can't read from", argv[1]);
	}

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		return (100);
	}

	return (0);
}

