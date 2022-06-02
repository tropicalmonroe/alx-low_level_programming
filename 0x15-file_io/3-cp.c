#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * check97 - check if correct
 * @argc: bumber of arg
 * Return: void
 */

void check97(int argc);
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - read only check and itds file xistance
 * @calls: system call
 * @arch: checks file xistance
 * @fd_arch: archives file descriptor from
 * @fd_towards: where to descriptor
 */

void check98(int fd_towards, int fd_arch, char *arch, ssize_t calls)
{
	if (calls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", arch);
		if (fd_arch != -1)
			close(fd_arch);
		if (fd_towards != -1)
			close(fd_towards);

		exit(98);
	}
}

/**
 * check99 - writes and creats
 * @calls: checks if true of false
 * @arch: file_to name
 * @fd_arch: file descr file_from
 * @fd_towards: file descrip file_to
 *
 * Return: void
 */

void check99(int fd_arch, int fd_towards, char *arch, ssize_t calls)
{
	if (calls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", arch);

		if (fd_arch != -1)
			close(fd_arch);
		if (fd_towards != -1)
			close(fd_towards);
		exit(99);
	}
}

/**
 * check100 - proper file closed
 * @calls: check file
 * @fd: file descriptor
 * Return: void
 */

void check100(int calls, int fd)
{
	if (calls == -1)
	{
		dprintf(STDERR_FINENO, "Error: Can't close fd FD_VALUE %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy and paste file from point to another
 * @argc: counts arguments
 * @argv: pointer arg
 * Return: 0
 */

int main (int argc, char *argv[])
{
	int fd_arch, fd_towards, funga_to, funga_from;
	ssize_t reed, rite;
	char buf[1024];
	mode_t file_perm;

	check97(argc);
	fd_arch = open(argv[1], O_RDONLY);
	check98((ssize_t)fd_arch, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_towards = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)fd_towards, argv[2], fd_from, -1);
	reed = 1024;
	while (reed == 1024)
	{
		reed = read(fd_arch, buf, 1024);
		check98(reed, argv[1], fd_arch, fd_towards);
		rite = write(fd_to, buffer, reed);
		if (rite != reed)
			rite = -1;
		check99(rite, argv[2], fd_arch, fd_towards);
	}
	funga_to = close(fd_towards);
	funga_from = close(fd_arch);
	check100(funga_to, fd_towards);
	check100(funga_from, fd_arch);
	return (0);
}
