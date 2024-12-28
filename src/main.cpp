#include <cstdlib>
#include <iostream>
#include <chrono>


int i;
int arr_length = 3;
float A[] = {1,2,3};
float B[] = {4,5,6};
float *C = (float *)malloc(arr_length * sizeof(float));


float Add[] = {1,2,3};

int main()
{



for (i = 0; i < arr_length; i++)
    C[i] = A[i] + B[i];

for (i = 0; i < arr_length; i++)
std::cout << "A: " << A[i] << "  B: " << B[i] << "  C: " << C[i] << std::endl;


}