void add_c(int n, int* a, int* b) {
  int i;
  for (i = 0; i < n; ++i) {
    a[i] += b[i];
  }
  return;
}
