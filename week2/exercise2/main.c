#include <stdio.h>

int find_number_of_roots(int A, int B, int C, int D);

int main(int argc, char const *argv[]) {
  double A, B, C, D;

  printf("Enter coefficients:");
  scanf("%lf %lf %lf %lf", &A, &B, &C, &D);

  switch (find_number_of_roots(A, B, C, D)) {
    case 1:
      printf("One real root\n");
      break;
    case 3:
      printf("Three real roots\n");
      break;
  }
  return 0;
}
