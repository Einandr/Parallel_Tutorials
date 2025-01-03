#include <cstdlib>
#include <iostream>
#include <chrono>
#include <stdlib.h>
#include <locale>
#include <string>

#define arr_length 10000

float *A = (float *)malloc(arr_length * sizeof(float));
float *B = (float *)malloc(arr_length * sizeof(float));
float *C = (float *)malloc(arr_length * sizeof(float));


void SAPB(int n,
		  float *x,
		  float *y,
		  float *result){
#pragma acc parallel loop
for (int i = 0; i < n; ++i)
	{
		// fill initial arrays
		int numA = std::rand()%n;
        int numB = std::rand()%n;
		x[i]=numA;
        y[i]=numB;
		// compute and fill result array
		result[i] = numA + numB;
		printf("i:  %i A: %.0f B: %.0f C: %.0f \n", i, x[i], y[i], result[i]);
		// std::cout << "A: " << A[i] << "  B: " << B[i] << "  C: " << C[i] << std::endl;

	}
}






int main()
{
// std::locale::global(std::locale("ru_RU.UTF-8"));
// int i;
// const int arr_length = 10000;
// float A[] = {1,2,3};
// float B[] = {4,5,6};



// for (i = 0; i < arr_length; i++)
// 	{
// 		int numA = std::rand()%arr_length;
//         int numB = std::rand()%arr_length;
// 		A[i]=numA;
//         B[i]=numB;
// 	}


// for (i = 0; i < arr_length; i++)
//     C[i] = A[i] + B[i];

// for (i = 0; i < arr_length; i++)
// std::cout << "A: " << A[i] << "  B: " << B[i] << "  C: " << C[i] << std::endl;

std::cout << "Старт задачи." << std::endl;

SAPB(arr_length, A, B, C);

std::cout << "Завершение задачи." << std::endl;


// for (int i = 0; i < arr_length; ++i)
// 	printf("A: %0f B: %0f C: %0f \n", A[i], B[i], C[i]);
	// std::cout << "A: " << A[i] << "  B: " << B[i] << "  C: " << C[i] << std::endl;

}