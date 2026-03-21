#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    int A[100][100];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    for(int i = 0; i < n; i++)
        sum += A[i][i];

    printf("%d", sum);

    return 0;
}