# linux_command_executor
This C program allows you to execute Linux commands by creating child processes using fork(), and then replacing the child process image with a new process image using execlp() to execute the specified command. It waits for the command to complete using wait() in the parent process.

Features
Execute Commands: Run Linux commands entered by the user.
Simple Interface: Enter commands directly from the command line interface.
Graceful Exit: Type 'exit' to quit the program.
How to Use
Clone the repository:

bash
Copy code
git clone https://github.com/your-username/linux-command-executor.git
Navigate to the project directory:

bash
Copy code
cd linux-command-executor
Compile the C program using a C compiler (e.g., GCC):

bash
Copy code
gcc -o command_executor command_executor.c
Run the compiled program:

bash
Copy code
./command_executor
Enter a Linux command when prompted. To exit the program, type 'exit' and press Enter.

Example
Here is an example session demonstrating the usage of this command executor:

bash
Copy code
Enter a Linux command or 'exit' for quit:
ls -l
total 24
-rwxr-xr-x 1 user user 12345 Jul  1 12:00 command_executor
-rw-r--r-- 1 user user   120 Jul  1 11:45 README.md
Enter a Linux command or 'exit' for quit:
pwd
/home/user/linux-command-executor
Enter a Linux command or 'exit' for quit:
exit
Exiting the program...
Contributing
Contributions are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.



