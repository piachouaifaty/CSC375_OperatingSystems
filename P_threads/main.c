#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUMBER_OF_THREADS 10

void *print_hello_world(void *tid) {
    printf("Hello, World! Greetings from thread %d\n", tid);
    pthread_exit(NULL);
    //prints thread identifier then exits
}

int main(int argc, char *argv[])
{
    //creates 10 threads then exits
    pthread_t threads[NUMBER_OF_THREADS]; //initializing an array of pthreads
    int status, i;

    for(i=0; i<NUMBER_OF_THREADS; i++)
    {
        printf("Main here. Creating thread %d\n", i);
        status = pthread_create(&threads[i], NULL, print_hello_world, (void *)i);

        if (status!=0) {
            printf("Oops, pthread_create returned error code %d\n", status);
            exit(-1);
        }

    }
    exit(NULL);
}