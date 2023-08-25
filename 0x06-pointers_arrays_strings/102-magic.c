#include <stdio.h>

int main(void)
{
  int r
  int x[5];
  int *l;

  x[2] = 1024;
  l = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use x
   * - you are not allowed to modify l
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(l + 5) = 98;
  /* ...so that this prints 98\n */
  printf("x[2] = %d\n", x[2]);
  return (0);
}
