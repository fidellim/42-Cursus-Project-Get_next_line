/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flim <flim@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 09:14:39 by flim          #+#    #+#             */
/*   Updated: 2022/02/18 01:17:03 by flim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <stdio.h>

#define NO_OF_FILES 3
// linux systems limit the num of FD that any one process may open to 1024 per process.
#define MAX_FD 1024

int	main(void)
{
	int		fd[NO_OF_FILES];
	int		i;
	char	*line[MAX_FD];
	char	*arr_of_filenames[] = {
		// "gnlTester/files/big_line_no_nl",
		"tests/test2.txt",
		"tests/sample.txt",
		"tests/test.txt",
	};
	int		file_counter;

	file_counter = 0;
	while (file_counter < NO_OF_FILES)
	{
		i = 1;
		fd[file_counter] = open(arr_of_filenames[file_counter], O_RDONLY);
		file_counter++;
	}
	printf("--------------------------------\n");
	file_counter = 0;
	line[fd[file_counter]] = get_next_line(fd[file_counter]);
	printf("Filename: %-20s || for fd %d: %s", arr_of_filenames[file_counter], fd[file_counter], line[fd[file_counter]]);
	free(line[fd[file_counter]]);

	file_counter = 1;
	line[fd[file_counter]] = get_next_line(fd[file_counter]);
	printf("Filename: %-20s || for fd %d: %s", arr_of_filenames[file_counter], fd[file_counter], line[fd[file_counter]]);
	free(line[fd[file_counter]]);

	file_counter = 2;
	line[fd[file_counter]] = get_next_line(fd[file_counter]);
	printf("Filename: %-20s || for fd %d: %s", arr_of_filenames[file_counter], fd[file_counter], line[fd[file_counter]]);
	free(line[fd[file_counter]]);

	file_counter = 0;
	line[fd[file_counter]] = get_next_line(fd[file_counter]);
	printf("Filename: %-20s || for fd %d: %s", arr_of_filenames[file_counter], fd[file_counter], line[fd[file_counter]]);
	free(line[fd[file_counter]]);

	file_counter = 1;
	line[fd[file_counter]] = get_next_line(fd[file_counter]);
	printf("Filename: %-20s || for fd %d: %s", arr_of_filenames[file_counter], fd[file_counter], line[fd[file_counter]]);
	free(line[fd[file_counter]]);

	file_counter = 2;
	line[fd[file_counter]] = get_next_line(fd[file_counter]);
	printf("Filename: %-20s || for fd %d: %s", arr_of_filenames[file_counter], fd[file_counter], line[fd[file_counter]]);
	free(line[fd[file_counter]]);

	file_counter = 0;
	line[fd[file_counter]] = get_next_line(fd[file_counter]);
	printf("Filename: %-20s || for fd %d: %s\n", arr_of_filenames[file_counter], fd[file_counter], line[fd[file_counter]]);
	free(line[fd[file_counter]]);

	file_counter = 1;
	line[fd[file_counter]] = get_next_line(fd[file_counter]);
	printf("Filename: %-20s || for fd %d: %s", arr_of_filenames[file_counter], fd[file_counter], line[fd[file_counter]]);
	free(line[fd[file_counter]]);

	file_counter = 2;
	line[fd[file_counter]] = get_next_line(fd[file_counter]);
	printf("Filename: %-20s || for fd %d: %s", arr_of_filenames[file_counter], fd[file_counter], line[fd[file_counter]]);
	free(line[fd[file_counter]]);

	printf("--------------------------------\n");
	file_counter = 0;
	while (file_counter < NO_OF_FILES)
	{
		close(fd[file_counter]);
		file_counter++;
	}
}
