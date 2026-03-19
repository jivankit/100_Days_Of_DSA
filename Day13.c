#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int A[100][100];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    // Boundary
    for(int i = 0; i < n; i++)
        printf("%d ", A[0][i]);

    for(int i = 1; i < n; i++)
        printf("%d ", A[i][n-1]);

    for(int i = n-2; i >= 0; i--)
        printf("%d ", A[n-1][i]);

    for(int i = n-2; i > 0; i--)
        printf("%d ", A[i][0]);

    // Center (if odd)
    if(n % 2 != 0)
        printf("%d", A[n/2][n/2]);

    return 0;
}