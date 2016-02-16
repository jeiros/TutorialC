#include <stdio.h>
#include <stdlib.h>

void printMatrix(double** matrix, unsigned int rows,
                                  unsigned int cols);


void freeMatrix(double **matrix) {
  free(matrix);
}

double **matrixI(int n) {
  double **matrixIdent = malloc(n*n*sizeof(double));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i==j) {
        matrixIdent[i][j] = 1;
      } else {
        matrixIdent[i][j] = 0;
      }
    }
  }
  return matrixIdent;
}


int main(int argc, char const *argv[]) {
  double **prueba = matrixI(4);
  printMatrix(prueba, 4, 4);
  freeMatrix(prueba);
  return 0;
}
