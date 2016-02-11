#include <stdio.h>


double v3dot(double *a, double *b) {

  double dot_product = a[0]*b[0] + a[1]*b[1] + a[2]*b[2];
  return dot_product;
}

int main(int argc, char const *argv[]) {
  double a[3];
  double b[3];

  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  
  b[0] = 3;
  b[1] = 3;
  b[2] = 45;

  printf("The dot product of a and b is %f\n", v3dot(a,b));

  return 0;
}
