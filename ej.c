/*

#-----------------------------------------------------

Bryan Abarca Weber
2015013388

*/

#include <stdio.h>
#include <omp.h>

static long num_steps = 100000000;
double step;
int main ()
{
	int i, nprocs;
	double x, sum = 0.0;
	double start_time, run_time;

	step = 1.0/(double) num_steps;

	/*start timer */
	start_time = omp_get_wtime();


	for (i=1;i<= num_steps; i++){
	x = (i-0.5)*step;
	sum = sum + ((x*x+2.0)*(x))/((x-4.0)*(x-4.0));
	}
	
	run_time = omp_get_wtime() - start_time;
	printf("\n sum is %f in %f seconds \n",sum,run_time);
	
}	
