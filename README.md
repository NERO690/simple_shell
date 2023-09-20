# Simple Shell by Nelson and Hilda

This is our self-owned simple shell in C language.

### About

Shell is a user interface to use the services of a computer. It can be a command-line interface –the one we will build- or a graphical user interface, like regular software such as Windows Office.

### Compilation
This simple shell is compiled with the following:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

### Output
This program has the same output as ```sh```and the same error output. The only difference is when it prints an error, the program's name is equivalent to ```argv[0]```.

#### Example of error with ```sh```:
```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```

#### Error with our program:

```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```
### Testing
#### Our shell works like this in interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```






```
$ Ethio
./hsh: No such file or directory
```

### Authors
[NELSON CHRISTMAS](https://github.com/NERO690)
(HILDA SATIH) https://github.com/hildasatih

