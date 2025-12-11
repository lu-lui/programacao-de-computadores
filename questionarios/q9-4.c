#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **A;
    int i, j, k, nlin=4, ncol=6;

    A = (int **) malloc(nlin * sizeof(int *));
    for ( i = 0; i < nlin; i++)
        A[i] = (int *) malloc(ncol * sizeof(int));

    k=0;
    for(i=0; i<nlin; i++)
        for(j=0; j<ncol; j++){
            A[i][j]=k+1;
            k++;
        }

    for(i=0; i<nlin; i++){
        for(j=0; j<ncol; j++){
            printf("%02d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}