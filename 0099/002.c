#include <stdio.h>

int main(void)
{
  int a1 = 1, a2 = 1, sum = 0;

  while (a3 < 4000000) {
    a3 = a1 + a2;
    sum += a3 * !(a3%2);
    a1 = a2;
    a2 = a3;
} //end while
  printf("%u\n", sum);
  //return 0;
}
