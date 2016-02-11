
#include <math.h>

int quad_roots(double A, double B, double C) {
	double roots[2];
	double determinant = (A*A) - (4*B*C);
	if ( !(A || B) && C) {
		// no meaningful solution
		return -3;
	} else if ((A && B) && C ) {
	    return -2;
	} else if ((C == 0) || (B != 0)) {
		roots[1] = (-C)/B;
		printf("The root is: %f\n", roots[1]);
		return -1;
	} else if (determinant > 0) {
		double square_root = sqrt(determinant);
		roots[0] = (-B + square_root) / (-2*C);
		roots[2] = (-B - square_root) / (-2*C);
		printf("The two real roots are:\n"
				"root[0]= %f\troot[1]= %f\n", roots[0], roots[1]);
		return 0;
	} else if (determinant < 0) {
		return 1;
	} else if (determinant == 0) {
		return 2;
	}
}
