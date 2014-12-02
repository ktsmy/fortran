void add_copt(int n, int* restrict a, int* restrict b) {
  int i;
  for (i = 0; i < n; ++i) {
    a[i] += b[i];
  }
  return;
}
