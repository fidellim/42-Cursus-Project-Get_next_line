# 42 Cursus Project: Get_next_line

## Introduction

This project is about programming a function that returns a line
read from a file descriptor. It will not only allow you to add a very convenient function to your collection, but it will also make you learn a highly interesting new concept in C programming: static variables.

## Command/s

To run get_next_line function with a main, use the command below:

```sh
Mandatory:

$ gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c tests/main.c -D BUFFER_SIZE={any value > 0} && ./a.out
```

```sh
Bonus:

$ gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c tests/main_bonus.c -D BUFFER_SIZE={any value > 0} && ./a.out
```

## Get_next_line Tester/s

- [Tripouille/gnlTester](https://github.com/Tripouille/gnlTester)

## Score

- 30 Black Hole days added
- 125/100 (Included Bonus) <br>
  <img src="./images/42_gnl_score.jpeg" alt="score" width="200"/>

## References

[File System Calls](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/)

[Multiple Read() Calls](https://stackoverflow.com/questions/34867211/what-happens-if-i-call-cs-read-multiple-times#:~:text=Every%20time%20you%20call%20read%20or%20write%20%2C%20action%20takes%20place,of%20file%20fd%20refers%20to.)

## Author

- Website - [Fidel Lim](https://fidellim-portfolio.netlify.app/)
- Github - [@fidellim](https://github.com/fidellim)
