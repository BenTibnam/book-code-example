/* Calculates average on a set of numbers
* Programming Challenge 2.5
*/

#include<iostream>

int main(){
	double vars[] = {28, 32, 37, 24, 33};
	int size = (sizeof(vars) / sizeof(double));
	double sum;

	for(double d : vars) sum += d;
	double avg = sum / size;
	
	printf("The average of data set is: %.2f\n", avg);

	return 0;
}
