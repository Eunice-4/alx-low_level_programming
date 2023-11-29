#include <stdio.h>
#include <stdlib.h>

void display_prompt(void)
{
    printf("$ ");
}

void run_command(char *user_input)
{
    pid_t child_pid;
    int child_status;

    child_pid = fork();

    if(child_pid == -1)
    {
        fprintf(STDERR_FILENO, "Error: failed to fork");
        exit(1);
    }
}