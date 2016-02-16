#include <stdio.h>
#include <assert.h>

double v3dot(double *a, double *b) {

  double dot_product = a[0]*b[0] + a[1]*b[1] + a[2]*b[2];
  return dot_product;
}

void v3cross (double *a, double *b, double *r) {

  r[0] = a[1]*b[2] - a[2]*b[1];
  r[1] = a[2]*b[0] - a[0]*b[2];
  r[2] = a[0]*b[1] - a[1]*b[0];
}

void v3crosscross(double *a, double *b, double *c, double *r) {
  double temp[3] = {0, 0, 0};

  v3cross(b, c, temp);
  v3cross(a, temp, r);
}

int main(int argc, char const *argv[]) {
  double a[3] = {1, 2, 3};
  double b[3] = {4, 5, 6};
  double c[3] = {7, 8, 9};

  double v3cross_result[3] = {0, 0, 0};
  double v3crosscross_result[3] = {0, 0, 0};

  printf("The dot product of a and b is %f\n", v3dot(a,b));

  v3cross(a, b, v3cross_result);

  printf("The v3cross result is:\n%f\n%f\n%f\n", v3cross_result[0],
                                                 v3cross_result[1],
                                                 v3cross_result[2]);

  v3crosscross(a, b, c, v3crosscross_result);
  printf("The v3crosscross result is:\n%f\n%f\n%f\n", v3crosscross_result[0],
                                                      v3crosscross_result[1],
                                                      v3crosscross_result[2]);

  


  return 0;
}
