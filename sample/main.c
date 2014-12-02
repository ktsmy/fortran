#include <stdio.h>
#include <sys/time.h>
#define NSIZE 1000000

long long get_utime(void);
void add_c(int n, int* a, int* b);
void add_copt(int n, int* a, int* b);
void add_fortran_(int *n, int* a, int* b);

long long get_utime(void) {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  return tv.tv_sec * 100000 + tv.tv_usec;
}

int main(void) {
  int n = NSIZE;
  int a[NSIZE], b[NSIZE];

  long long t1 = get_utime();

  add_c(n, a, b);

  long long t2 = get_utime();

  add_copt(n, a, b);

  long long t3 = get_utime();

  add_fortran_(&n, a, b);

  long long t4 = get_utime();

  printf("add_c: %lld [usec]\n", t2 - t1);
  printf("add_copt: %lld [usec]\n", t3 - t2);
  printf("add_fortran: %lld [usec]\n", t4 - t3);

  return 0;
}
