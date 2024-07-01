# linux_command_executor
Linux Command Executor in C
This repository contains a C program for executing Linux commands directly from a C program. It provides a simple interface to interact with the Linux shell and execute commands programmatically.

Features
Execute Commands: Run arbitrary Linux commands and capture their output.
Error Handling: Proper handling of errors during command execution.
Customization: Easily integrate into other C programs or projects.
Usage
Clone the repository:

bash
Copy code
git clone https://github.com/AmalyaPogosyan/linux_command_executor.git
Navigate to the project directory:

bash
Copy code
cd linux_command_executor
Compile the C program using a C compiler (e.g., GCC):

bash
Copy code
gcc -o command_executor command_executor.c
Run the compiled program to execute Linux commands:

bash
Copy code
./command_executor "ls -l"
Replace "ls -l" with any command you want to execute.

Example
Here is a simple example of using the command executor:

bash
Copy code
$ ./command_executor "echo Hello, World!"
Hello, World!
