#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
 * Algorithm Challenge – Level 3 | #13
 * Identity Matrix Validation
 *
 * This program checks whether a given 3×3 matrix is an Identity Matrix.
 *
 * Identity Matrix Rules:
 * - All diagonal elements must be equal to 1.
 * - All non-diagonal elements must be equal to 0.
 *
 * The algorithm traverses the matrix element by element
 * and validates each cell based on its position.
 */

// Prints the matrix in a formatted layout
void PrintMatrix(int arr[3][3], short Rows, short Colms)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Colms; j++)
        {
            cout << setw(2) << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

// Checks whether the matrix is an Identity Matrix
bool IsIdentityMatrix(int Matrix1[3][3], short Rows, short Colms)
{
    for (short i = 0; i < Rows; i++) // Traverse rows
    {
        for (short j = 0; j < Colms; j++) // Traverse columns
        {
            // Diagonal elements must be 1
            if (i == j && Matrix1[i][j] != 1)
                return false;

            // Non-diagonal elements must be 0
            if (i != j && Matrix1[i][j] != 0)
                return false;
        }
    }
    return true; // All conditions satisfied
}

int main()
{
    int Matrix1[3][3] =
        {
            {1, 0, 0},
            {0, 1, 0},
            {0, 0, 1}
        };

    cout << "Matrix 1:\n";
    PrintMatrix(Matrix1, 3, 3);

    if (IsIdentityMatrix(Matrix1, 3, 3))
        cout << "\nYES: Matrix is Identity.";
    else
        cout << "\nNO: Matrix is NOT Identity.";

    return 0;
}
