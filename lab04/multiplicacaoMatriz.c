#include <pthread.h>
#include <stdio.h>

int m = 4;
int n = 3;
double A[4][3] = {{2, 2, 3}, {4, 3, 6}, {4, 4, 9}, {5, 11, 6}};
double x[3] = {1, 3, 4};
double y[4]; 
int thread_count = 4;

void Pth_matriz_vetor(void *rank) {
  long my_rank = (long)rank;
  int i, j;
  int local_m = m / thread_count;
  
  int start_row = my_rank * local_m;
  int end_row = (my_rank == thread_count - 1) ? m - 1 : start_row + local_m - 1;

  for (int i = start_row; i <= end_row; i++){
    
  }
}
