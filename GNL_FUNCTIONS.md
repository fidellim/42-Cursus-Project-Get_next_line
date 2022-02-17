# Functions used for get_next_line

## char	*ft_strjoin(char const *s1, char const *s2)
- returns a string that consists of the concatenated 2 strings

## size_t	ft_strlen(const	char *str)
- counts length of string

## int	has_newline(char *str)
- checks if there is a newline within the string.

## char	*ft_before(char *str)
- increment "i" if character is not newline & not null
- if first index of str is null, return null
- allocate memory for "ptr". If "ptr" is null, return null
- copy values of "str" in "ptr" if value is not newline/null
- add newline if current value of str[i] us newline
- add null terminator to "ptr" 
- return "ptr"

## char	*ft_after(char *str)
- if "str" is null, return null
- count length of "str"
- increment "j" if character is not newline & not null
- if current index of "str" is null terminator, free "str" and return null"
- allocate memory for "ptr". If "ptr" is null, return null
- copy values of "str" (starting index is after index of "newline"). Then, add null terminator at the end. 
- free memory of "str"
- return "ptr"

## char	*ft_read(int fd, char *buf, char *tmp, char *str)
- while it is not EOF
- read the file based on buffer_size
- if i returns -1, there is an error/signal interrupt. Free "buf" and return "NULL"
- add null terminator at last index of "buf"
- point "tmp" to address of "str"
- if "tmp" is null, allocate memory for null terminator"
- use ft_strjoin to concatenate "tmp" & "buf"
- free memory of "tmp"
- if there is a "\n" in "str" get out of loop. otherwise, repeat the whole thing
- Once out of the loop, free "buf" and return "str"

## char	*get_next_line(int fd)
- check if file desc < 0 or buffer size < 0. If true, return null
- allocate memory to "buf". If "buf" is null, return null
- check for a "\n" within a file using ft_read func and store in "str". If "str" is null, return null
- use ft_before to collect one line from "str" and store in "line"
- store the remaining characters from "str" to "str" using ft_after (*this will be used again when the function is called as it is static variable)
- return "line"