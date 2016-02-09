#include <math.h>
#include <stdio.h>


int find_number_of_roots(int A, int B, int C, int D, double *real) {

  double a_0 = D/A;
  double a_1 = C/A;
  double a_2 = B/A;

  double q = ((a_2*a_2) - 3*a_1)/9;
  double r = (2*pow(a_2,3) - 9*a_1*a_2 + 27*a_0)/54;

  if (((pow(q,3) - r*r) < 0)) {
    *real = (-fabs(r)/r)*((pow(sqrt(r*r-pow(q,3))+fabs(r),1/3)) +
             (q/pow(sqrt(r*r-pow(q,3))+fabs(r),1/3))) - a_2/3;
    return 1;
  } else {
    *real = (-2*sqrt(q)*cos(acos(r*pow(q,-3/2))/3)) - a_2/3;
    return 3;
  }
}
