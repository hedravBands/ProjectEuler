#include <stdio.h>

int main(void)
{
  unsigned s1 = 0, s2 = 0, i; //declaring
  for (i = 1; i <= 100; i++) {
    s1 += i*i;
    s2 += i;
    } //end for
  printf("%u\n", s2*s2 - s1); //verified
  return 0;
} // end main
