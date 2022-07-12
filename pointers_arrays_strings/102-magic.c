#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  printf("Address of n: %p\n", &n);
  printf("Address of a: %p\n", a);
  printf("Address of p: %p\n", &p);
  printf("Address of a[0]: %p\n", &a[0]);
  printf("Address of a[1]: %p\n", &a[1]);
  printf("Address of a[2]: %p\n", &a[2]);
  printf("Address of a[3]: %p\n", &a[3]);
  printf("Address of a[4]: %p\n", &a[4]);
  *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
