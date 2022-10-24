#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>

void
setup(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);

   // Setting up A vector or array with length N filled
    for(int i = 0;i<N;i++)
    {
        A[i] = i;
    }
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);

   int sum = 0;
   std::vector<int> B;

   // Generate random vector of N length
   for (int i=0; i < N-1; i++) {
       B.push_back(rand());
   }

   int indx = B[0];

    for (int j=0; j < N; j++) {
        sum += A[indx];
        indx = B[indx];
    }
    std::cout << "sum = " << sum;


   return sum;
}


