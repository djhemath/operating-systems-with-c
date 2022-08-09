#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdlib.h>

void main()
{
    // int i;
    // pid_t cpid;

    // cpid = fork();

    // if (cpid == 0) {
    //     for (i = 0; i < 10000000; i++) {
    //         printf("Child: %i", i);
    //     }
    //     exit(0);
    // }
    // else {
    //     // wait(NULL);
    //     for (i = 0; i < 1000000; i++) {
    //         printf("Parent: %i", i);
    //     }
    //     kill(cpid, SIGKILL);
    //     exit(0);
    // }

    pid_t cpid;

    cpid = fork();

    if(cpid == 0) {
        system("gnome-terminal -- bash -c \"cd server-2; npm init -y; npm i express; touch index.js; exec bash\"");
    } else {
        system("gnome-terminal -- bash -c \"cd server-1; npm init -y; npm i express; touch index.js; exec bash\"");
    }

    exit(0);
}