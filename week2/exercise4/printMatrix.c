#include <stdio.h>
void printMatrix(double** matrix, unsigned int rows,
                                  unsigned int cols)
{
  unsigned int i, j;
  for (i = 0; i < rows; i++){
      for (j = 0; j < cols; j++){
            printf("%8.5lf ", matrix[i][j]);
      }
            printf("\n");
  }
}
