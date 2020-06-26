/* m005.c - Determinant.

   This program reads the integer coefficients of a 3x3 matrix
   and outputs the matrix's determinant. Matrix coefficients
   are read from standard input one line at a time, in the form
   of blank-separated integers.

   E.g.

      command line    : m005
      standard input  : 1 2 3
                        2 1 3
                        3 2 1
      expected output : 12

   Directions:

      Please, edit function determinant();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

/* Return the determinant of a 3x3 integer matrix.*/

int determinant (int m[3][3])
{
    int size;
    int A[size][size];
    int row, col;
    int a, b, c, d, e, f, g, h, i;
    long det;

    printf("Enter elements in matrix of size 3x3: \n");
    for(row = 0; row < size; row++)
    {
    for (col = 0; col<size; col++)
    {
    scanf("%d", &A [row][col]);
    }
}
    a = A[0][0];
    b = A[0][1];
    c = A[0][2];
    d = A[1][0];
    e = A[1][1];
    f = A[1][2];
    g = A[2][0];
    h = A[2][1];
    i = A[2][2];

    det = (a*(e*i - f*h)) - (b*(d*i - f*g)) + (c*(d*h - e*g));

    printf("Determinant of matrix A = %ld", det);

    return 0;

  return 0;
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a[3][3];
  int det;

  /* Read matrix lines. */

  scanf ("%d %d %d", &a[0][0], &a[0][1], &a[0][2]);
  scanf ("%d %d %d", &a[1][0], &a[1][1], &a[1][2]);
  scanf ("%d %d %d", &a[2][0], &a[2][1], &a[2][2]);

  det = determinant (a);

  printf ("%d\n", det);

  return 0;
}
