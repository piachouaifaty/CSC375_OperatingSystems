#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	pid_t  pid;
        int a=1;

	/* fork another process */
	pid = fork();
	if (pid < 0) { /* error occurred */
		fprintf(stderr, "Fork Failed");
		exit(-1);
	}
	else if (pid == 0) { /* child process */
		printf ("Child process ...\n");
	}
	else { /* parent process */
		/* parent will wait for the child to complete */
		printf ("Parent process...\n");
	}

	for (int i=0;i<20;i++)
	{
		a++;
		sleep (1);
		cout <<pid << ": a=" << a << endl;
	}

}
