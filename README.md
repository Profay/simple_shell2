This is a collaborative work between Oluwashogo Oyewale and Mutiu Falade


Background Context
Write a simple UNIX command interpreter.

The below comprises the ultimate task to complete C programming language.

We are buildimg simple shell program and it comprises of different compilation programs.

To compile the following code is required.   
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

To run, It must follow the basic commands.
interactive mode:
$ ./hsh
($) /bin/ls
hsh main.c shell.c etc...
($)
($) exit
$

Non interactive mode:
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c etc...
$
$ cat main.c
{prints out the content of the main.c file to the standard output}
$
$ cat shell.c | ./hsh
{prints out the content of the shell.c file to the standard output}
$

The simple shell is briefly described to read files from files and execute them.
>>>>>>> master-holder
