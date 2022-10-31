#include <stdio.h>

/* print Farenheit-Celsius Table 
   for fahr = 0, 20, ..., 300 */

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  for (fahr = 0; fahr <= upper; fahr = fahr + 20) {
    celsius = (5.0/9.0) * (fahr-32);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
  }

  return 0;
}