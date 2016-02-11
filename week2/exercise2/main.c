#include <stdio.h>
#include "find_number_of_roots.h"

int main(int argc, char const *argv[]) {
  double A, B, C, D;
  double real;
  printf("Enter coefficients:");
  scanf("%lf %lf %lf %lf", &A, &B, &C, &D);

  switch (find_number_of_roots(A, B, C, D, &real)) {
    case 1:
      printf("One real root and a complex conjugate\n");
      printf("The real root value is: %f\n", real);
      break;
    case 3:
      printf("Three real roots\n");
      printf("One of the real roots is:%f\n", real);
      break;
  }
  return 0;
}
