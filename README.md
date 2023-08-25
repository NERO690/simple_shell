###MyShell

This is a simple shell program written in C. It demonstrates core concepts like:

* Reading user input
* Parsing input into arguments
* Executing commands
* Handling memory allocation
* Files
* main.c - Contains the main loop that:



```

- Prints prompt and reads user input
- Tokenizes input into arguments
- Executes command
- Frees allocated memory
```
main.h - Header file with constants, macros, and function prototypes

### helpers.c - Will contain helper functions like:

```

- Getting user input
- Copying strings
- Tokenizing strings  
- Getting command path

```
execute.c - Will contain function to execute commands

###Functions
main - Entry point and main loop
get_line - Reads input from user into buffer
copy_str - Duplicates a string
str_tokenize - Splits string into tokens by delimiter
execute - Executes command with arguments
get_cmd_path - Finds full path for command
Compiling
The project uses Make. To compile the executable:


###make all
This will compile main.c and any additional .c files.

###Running
To run the shell after compiling:


./myshell
Coding Style
This project follows the Betty style guidelines.

###Contributing
Feel free to contribute by opening issues for bugs/features and submitting pull requests.

Let me know if you need any other changes to the README formatting or contents contact [christmas](www.facebook.com)!
