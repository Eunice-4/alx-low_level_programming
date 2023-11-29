#include <stdio.h>
#include <stdlib.h>

void display_prompt(void)
{
    printf("$ ");
}

void run_command(char *user_input, char *argv[])
{
    pid_t child_pid;
    int child_status;

    child_pid = fork();

    if(child_pid == -1)
    {
        fprintf(STDERR_FILENO, "Error: failed to fork");
        exit(1);
    }
    else if(child_pid == 0)
    {
        if(execve("/bin/sh", argv, NULLL) == -1)
    }
}