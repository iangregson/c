#include <stdio.h>

/* print Farenheit-Celsius Table 
   for fahr = 0, 20, ..., 300 */

#define LOWER 0   /* Temperature floor */
#define UPPER 300 /* Temperature ceiling */
#define STEP  20  /* Temperature increment */

int main()
{
  float fahr, celsius;

  fahr = LOWER;

  while (fahr <= UPPER) {
    celsius = (5.0/9.0) * (fahr-32);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + STEP;
  }

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - 20) {
    celsius = (5.0/9.0) * (fahr-32);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
  }

  return 0;
}