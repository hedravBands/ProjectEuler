#include <stdio.h>

static int is_p(unsigned int n);

int is_p(unsigned int n) // testing if palind.
{
  unsigned int reversed = 0, t = n;

  while (1) { //always true
    reversed = 10*reversed + (t % 10);
    t /= 10;
} //end while
  return reversed == n;
}//end function

int main(void)
{
  unsigned int i, j, max = 0;
  for (i = 100; i <= 999; i++) {
    for (j = 100; j <= 999; j++) {
      unsigned int p = i*j;
      if (is_p(p) && p > max) {
        max = p;
        }//end if 
     }//end for j
   }// end for i
  printf("%u\n", max);
  return 0;
} // end main
