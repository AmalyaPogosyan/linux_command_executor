#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 100

void execute_command(char* command) {
	pid_t pid;
	int status;
	//Creat a child process
	pid = fork();
	if (pid < 0){
		fprintf(stderr, "Fork failed\n");
		exit(1);
	}	
	else if (pid == 0) {
		//Child process
		execlp(command, command, NULL);
		//execlp only returns if n error occures
		fprintf(stderr, "Error executing command\n");
		exit(1);	
	}
	else {
		//Parent process
		//Wait for child to complate
		wait(&status);
		printf("\nCommand executed successfully\n");
	}

}

int main() {
	char command[MAX_COMMAND_LENGTH];
	while(1){
		printf("Enter a Linux command or 'exit' for quit:\n");
		fgets(command, sizeof(command), stdin);
		//Remove newline character from command
		command[strcspn(command, "\n")] = '\0';
		//Check if user want to exit
		if(strcmp(command, "exit") == 0){
			break;
		}
		//Execute the command
		execute_command(command);
	}
	printf("Exiting the program...\n");
	return 0;
}














