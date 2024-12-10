#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "executor.h"

void execute_command(char **args) {
    pid_t pid = fork();
    if (pid == 0) {
        // Child process
        if (execvp(args[0], args) == -1) {
            perror("Error executing command");
        }
        exit(EXIT_FAILURE);
    } else if (pid < 0) {
        // Fork failed
        perror("Fork failed");
    } else {
        // Parent process
        waitpid(pid, NULL, 0);
    }
}
