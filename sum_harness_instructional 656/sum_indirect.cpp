#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>


uint64_t B[0];
void
setup(int64_t N, uint64_t A[])
{
    // Setting up A vector or array with length N filled
    printf(" inside sum_indirect problem_setup, N=%lld \n", N);
    for(int i = 0;i<N;i++)
    {
        A[i] = rand() % N;
    }
}

int64_t
sum(int64_t N, uint64_t A[])
{

    printf(" inside sum_indirect perform_sum, N=%lld \n", N);
    int64_t sum = 0;
    int indx = B[0];
    for(int i=0;i<N;i++)
    {
        sum += A[indx];
        indx = B[indx];
    }
    return sum;
}
