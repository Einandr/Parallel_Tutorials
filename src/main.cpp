#include <cstdlib>
#include <iostream>
#include <chrono>
#include <stdlib.h>


int i;
int arr_length = 100;
// float A[] = {1,2,3};
// float B[] = {4,5,6};
float *A = (float *)malloc(arr_length * sizeof(float));
float *B = (float *)malloc(arr_length * sizeof(float));
float *C = (float *)malloc(arr_length * sizeof(float));


int main()
{

for (i = 0; i < arr_length; i++)
	{
		int numA = std::rand()%arr_length;
        int numB = std::rand()%arr_length;
		A[i]=numA;
        B[i]=numB;
	}


for (i = 0; i < arr_length; i++)
    C[i] = A[i] + B[i];

for (i = 0; i < arr_length; i++)
std::cout << "A: " << A[i] << "  B: " << B[i] << "  C: " << C[i] << std::endl;


}