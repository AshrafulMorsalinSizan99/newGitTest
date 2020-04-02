#include <stdio.h>

int ackermann(unsigned int *m, unsigned int *n, unsigned int* a, int* len)
{
  if(!*m && *len == -1) {
    return ++*n;
  }
  else if(!*m && *len >= 0) {
    ++*n;
    *m = a[(*len)--];
  }
  else if(*n == 0) {
    --*m;
    *n = 1;
  } else {
    ++*len;
    a[*len] = *m - 1;
    --*n;
  }
  return ackermann(m, n, a, len);
}

int main()
{
  unsigned int m=4, n=1;
  unsigned int a[66000];
  int len = -1;

  for (m = 0; m <= 4; m++)
    for (n = 0; n < 6 - m; n++) {
      unsigned int i = m;
      unsigned int j = n;
      printf("A(%d, %d) = %d\n", m, n, ackermann(&i, &j, a, &len));
    }

  return 0;
}
