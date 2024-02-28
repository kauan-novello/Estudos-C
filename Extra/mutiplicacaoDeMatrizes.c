#include <stdio.h>

int main ()
{
    int A[3][2] = 
    {
        {2, 3},
        {5, 7},
        {1, 6}
    };

    int B[2][3] = 
    {
        {4, 7, 9},
        {9, 11, 2}
    };

    int C[3][3];

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            C[i][j] = 0;
            for (int k=0; k<2; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++) {
            if (j==0)
                printf("%3d", C[i][j]);
            else
                printf(" %3d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}