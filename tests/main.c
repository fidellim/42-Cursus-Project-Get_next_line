/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flim <flim@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 09:14:39 by flim          #+#    #+#             */
/*   Updated: 2022/02/17 23:09:52 by flim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <stdio.h>

#define NO_OF_FILES 1
// linux systems limit the num of FD that any one process may open to 1024 per process.
#define MAX_FD 1024

int	main(void)
{
	int		fd, fd2;
	int		i;
	char	*line[MAX_FD];
	char	*arr_of_filenames[] = {
		// "gnlTester/files/big_line_no_nl",
		"tests/test2.txt",
		"tests/sample.txt",
		"tests/test.txt",
	};
	int		file_counter;

	// fd_1 = open("tests/J. K. Rowling - Harry Potter 1 - Sorcerer's Stone.txt", \
	// 				O_RDONLY);
	file_counter = 0;
	while (file_counter < NO_OF_FILES)
	{
		i = 1;
		fd = open(arr_of_filenames[file_counter], O_RDONLY);
		printf("----------------------------\n");
		printf("Filename: %s\n", arr_of_filenames[file_counter]);
		while (1)
		{
			line[fd] = get_next_line(fd);
			if (!line[fd])
				break;
			else
				printf("Line %d for fd %d: %s", i, fd, line[fd]);
			free(line[fd]);
			i++;
		}
		printf("\n----------------------------\n");
		close(fd);
		file_counter++;
	}
	// file_counter = 0;
	// i = 0;
	// fd = open(arr_of_filenames[file_counter], O_RDONLY);
	// printf("----------------------------\n");
	// printf("Filename: %s\n", arr_of_filenames[file_counter]);
	// line[fd] = get_next_line(fd);
	// printf("Line %d for fd %d: %s", i++, fd, line[fd]);
	// free(line[fd]);
	// line[fd] = get_next_line(fd);
	// printf("Line %d for fd %d: %s", i++, fd, line[fd]);
	// free(line[fd]);
	// 	line[fd] = get_next_line(fd);
	// printf("Line %d for fd %d: %s", i++, fd, line[fd]);
	// free(line[fd]);
	// close(fd);
	// printf("\n");
	// // i= 0;
	// // file_counter++;
	// // fd = open(arr_of_filenames[file_counter], O_RDONLY);
	// // printf("Filename: %s\n", arr_of_filenames[file_counter]);
	// // line[fd] = get_next_line(fd);
	// // printf("Line %d for fd %d: %s", i, fd, line[fd]);
	// // free(line[fd]);

	// i = 0;
	// file_counter = 0;
	// fd = open(arr_of_filenames[file_counter], O_RDONLY);
	// printf("Filename: %s\n", arr_of_filenames[file_counter]);
	// line[fd] = get_next_line(fd);
	// printf("Line %d for fd %d: %s", i, fd, line[fd]);
	// free(line[fd]);

	// file_counter++;
	// fd2 = open(arr_of_filenames[file_counter], O_RDONLY);
	// printf("Filename: %s\n", arr_of_filenames[file_counter]);
	// line[fd2] = get_next_line(fd2);
	// printf("Line %d for fd %d: %s", i, fd2, line[fd2]);
	// free(line[fd2]);

	// i = 0;
	// file_counter = 0;
	// printf("Filename: %s\n", arr_of_filenames[file_counter]);
	// line[fd] = get_next_line(fd);
	// printf("Line %d for fd %d: %s", i, fd, line[fd]);
	// free(line[fd]);

	// printf("Filename: %s\n", arr_of_filenames[file_counter]);
	// line[fd2] = get_next_line(fd2);
	// printf("Line %d for fd %d: %s", i, fd2, line[fd2]);
	// free(line[fd2]);
}
