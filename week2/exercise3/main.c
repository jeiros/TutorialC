#include <stdio.h>


double v3dot(double *a, double *b) {

  double dot_product = a[0]*b[0] + a[1]*b[1] + a[2]*b[2];
  return dot_product;
}

void v3cross (double *a, double *b, double *r) {

  r[0] = a[1]*b[2] - a[2]*b[1];
  r[1] = a[2]*b[0] - a[0]*b[2];
  r[3] = a[0]*b[1] - a[1]*b[0];

}

int main(int argc, char const *argv[]) {
  double a[3];
  double b[3];
  double v3cross_result[3] = {0, 0, 0};

  a[0] = 1;
  a[1] = 2;
  a[2] = 3;

  b[0] = 3;
  b[1] = 3;
  b[2] = 45;

  printf("The dot product of a and b is %f\n", v3dot(a,b));

  v3cross(a, b, v3cross_result);

  printf("The v3cross result is:\n%f\n%f\n%f\n", v3cross_result[0],
                                               v3cross_result[1],
                                               v3cross_result[2]);

  return 0;
}
