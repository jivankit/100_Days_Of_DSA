#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int A[100][100], B[100][100], C[100][100];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            C[i][j] = A[i][j] + B[i][j];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}