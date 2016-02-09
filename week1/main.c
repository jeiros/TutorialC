#include <stdio.h>

int quad_roots (double A, double B, double C);

int main(int argc, char const *argv[])
{
    double A, B, C;
    printf("Enter coefficients:");
    scanf("%lf %lf %lf", &A, &B, &C);
    switch(quad_roots(A, B, C))
    {
        case 0:
            printf("These are two different real roots\n");
            break;
        case 1:
            printf("These are complex conjugate roots\n");
            break;
        case 2:
            printf("These are two equal real rootsn");
            break;
        case -1:
            printf("This is a linear equation\n");
            break;
        case -2:
            printf("Not a meaningful solution\n");
            break;
        case -3:
            printf("Not an equation\n");
            break;
        case 123:
            printf("This should never be printed\n");
            break;
    }
    return 0;
}