/*
The program computes the SAXPY operation on the x and y vectors

                  S=a*X+Y 

#-----------------------------------------------------

Bryan Abarca Weber
2015013388

*/

#include <stdio.h>
#include <omp.h>
#include <stdlib.h>

static long size = 600000;

int main ()
{
	int i, nprocs;
    int S[size], X[size], Y[size], a;
	double start_time, run_time;

	for(i=0;i<size; i++){
        X[i] = rand();
        Y[i] = rand();        
    }
    a = rand();

	/*start timer */
	start_time = omp_get_wtime();


	for (i=0;i<size; i++){
	S[i] = a*X[i]+Y[i];
	}
	
	run_time = omp_get_wtime() - start_time;
	printf("\n Execution time: %f seconds \n",run_time);
	
}	  

