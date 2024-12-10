#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "parser.h"
#include "executor.h"

#define MAX_INPUT_SIZE 1024

int main() {
    char input[MAX_INPUT_SIZE];
    char *args[MAX_ARG_SIZE];

    while (1) {
        printf("custom-shell> ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            perror("fgets failed");
            continue;
        }

        // Handle empty input
        if (strcmp(input, "\n") == 0) continue;

        // Exit command
        if (strcmp(input, "exit\n") == 0) {
            printf("Exiting shell...\n");
            break;
        }

        // Parse and execute
        parse_input(input, args);
        execute_command(args);
    }

    return 0;
}
