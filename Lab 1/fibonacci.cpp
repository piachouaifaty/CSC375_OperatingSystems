//EZ: To be compiled 
//EZ: g++ thread_fibo.cpp -fpermissive -lpthread
#include <iostream>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

int a=20;

//To pass the function to pthread_create, we need to match the 
//argument expected by pthread_create: take generic pointer as parameter,
//and return a generic pointer 
int Fibo (int n)
{
  
   if (n==1)
	return n;
   else if (n==2)
	return n;
   else { 
	int result = Fibo(n-1) + Fibo (n-2);
	return result;
   }
	
}



int main(int argc, char * argv[])
{
   const int NUMBER_OF_THREADS=10;
   pthread_t threads[NUMBER_OF_THREADS];
  
   int status,i;
   int pos;

   for (i=0; i<NUMBER_OF_THREADS; i++){
      cout <<"What number?";
      cin >> pos;
    
       //Fibo(pos);
       
       cout << Fibo(pos);

   }
   sleep (20);
   exit (NULL);

}
