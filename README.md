## Everything you need to know to start coding your own shell

+ PID & PPID
1.0. getppid
Write a program that prints the PID of the parent process. Run your program several times within the same shell. It should be the same. Does echo $$ print the same value? Why?

1.1. /proc/sys/kernel/pid_max
Write a shell script that prints the maximum value a process ID can be.

+ ARGUMENTS
2.0. av
Write a program that prints all the arguments, without using ac.

2.1. Read line
Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line.

2.2. command line to av
Write a function that splits a string and returns an array of each word of the string.

+ EXECUTING A PROGRAM
Study execve

+ CREATING PROCESSES
Study fork

+ WAIT
Study wait

3.0. fork + wait + execve
Write a program that executes the command ls -l /tmp in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before creating a new child.

4.0. super simple shell
Using everything we saw, write a first version of a super simple shell that can run commands with their full path, without any argument.

+ FILE INFORMATION
Study stat

5.0. find a file in the PATH
Write a program that looks for files in the current PATH.

Usage: _which filename ...

+ ENVIRONMENT
6.0. printenv with environ
Write a program that prints the environment using the global variable environ.

6.1. env vs environ
Write a program that prints the address of env (the third parameter of the main function) and environ (the global variable). Are they they same? Does this make sense?

6.2. getenv()
Write a function that gets an environment variable. (without using getenv)

Prototype: char *_getenv(const char *name);
man 3 getenv

6.3 PATH
Write a function that prints each directory contained in the the environment variable PATH, one directory per line.

6.4. PATH
Write a function that builds a linked list of the PATH directories.

6.5. setenv
Write a function that changes or adds an environment variable (without using setenv).

Prototype: int _setenv(const char *name, const char *value, int overwrite);
man 3 setenv

6.6. unsetenv
Write a function that deletes the variable name from the environment (without using unsetenv).

Prototype: int _unsetenv(const char *name);
man 3 unsetenv
