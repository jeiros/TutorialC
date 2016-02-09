#include <math.h>
#include <stdio.h>


int quad_roots(double A, double B, double C) {
    double roots[2];
    double det = ((B*B) - (4*A*C));

    if ( !(A || B) && C )
    {
        /*Not an equation*/
        return -3;
    } else if (!(A || B || C)) {
        /*No meaningful solution*/
        return -2;
    } else if ((A == 0) && (B != 0)) {
        /*Linear eq*/
        roots[0] = -C/B;
        return -1;
    } else if (det > 0) {
        /*Two different real roots*/
        roots[0] = (-B + sqrt(det))/(2*A);
        roots[1] = (-B - sqrt(det))/(2*A);
        printf("Root1 = %f\tRoot2 = %f\n", roots[0], roots[1]);
        return 0;
    } else if (det < 0) {
        /*Complex conjugate*/
        roots[0] = -B/(2*A);
        roots[1] = sqrt(-det);
        printf("Real part is: %f\tComplex part is: %f\n", roots[0], roots[1]);
        return 1;
    } else if (det == 0) {
        /*Two equal real roots*/
        roots[0] = -B/(2*A);
        roots[1] = roots[0];
        printf("Root1 = %f\tRoot2 = %f\n", roots[0], roots[1]);
        return 2;
    }
    return 123;
}
