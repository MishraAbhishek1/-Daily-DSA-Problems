// Problem 5:  multiply the two metrices <<
#include <iostream>
using namespace std;

#define R1 2
#define C1 2
#define R2 2
#define C2 2
/*Given two matrices, the task is to multiply them. Matrices can either be square or rectangular:

Examples: 

    (Square Matrix Multiplication)

    Input: mat1[m][n] = { {1, 1}, {2, 2} }
    mat2[n][p] = { {1, 1}, {2, 2} }
    Output: result[m][p] = { {3, 3}, {6, 6} }

    (Rectangular Matrix Multiplication)

    Input: mat1[3][2] = { {1, 1}, {2, 2}, {3, 3} }
    mat2[2][3] = { {1, 1, 1}, {2, 2, 2} }
    Output: result[3][3] = { {3, 3, 3}, {6, 6, 6}, {9, 9, 9} }
    
    ...............

    Multiplication of two Square or Rectangular Matrices:

        The number of columns in Matrix-1 must be equal to the number of rows in Matrix-2.
        Output of multiplication of Matrix-1 and Matrix-2, results with equal to the number of rows of Matrix-1 and  the number of columns of Matrix-2 i.e. rslt[R1][C2]

    */
// create a function <<
void matrix(int mat1[][C1], int mat2[][C2])
{
    int rslt[R1][C2];
    cout << "Multiplication of given two metrics is \n";

    for(int i =0; i< R1; i++){
        for( int j = 0; j<C2; j++)
        {
            rslt[i][j] =0;

            for (int k = 0; k < R2; k++)
            {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }
            cout << rslt[i][j] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    // R1 = 4, C1 = 4 and R2 = 4, C2 = 4 (Update these
    // values in MACROs)
    int mat1[R1][C1] = { { 1, 1 },
                         { 2, 2 } };

    int mat2[R2][C2] = { { 1, 1 },
                         { 2, 2 } };

    if (C1 != R2) {
        cout << "The number of columns in Matrix-1  must "
                "be equal to the number of rows in "
                "Matrix-2"
             << endl;
        cout << "Please update MACROs according to your "
                "array dimension in #define section"
             << endl;

        exit(EXIT_FAILURE);
    }

      // Function call
    matrix(mat1, mat2);

    return 0;
}
