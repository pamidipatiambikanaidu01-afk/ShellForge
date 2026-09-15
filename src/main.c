#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/shell.h"
#include "../include/input.h"

int main()
{
    printf("=====================================\n");
    printf(" Welcome to %s Version %s\n", SHELL_NAME, VERSION);
    printf("=====================================\n");

    while(1)
    {
        printf("myshell> ");

        char *line = read_line();

        if(strcmp(line, "exit") == 0)
        {
            free(line);
            printf("Exiting ShellForge...\n");
            break;
        }

        if(strlen(line) > 0)
        {
            printf("You entered : %s\n", line);
        }

        free(line);
    }

    return 0;
}
