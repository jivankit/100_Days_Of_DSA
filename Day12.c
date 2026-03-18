#include <stdio.h>

int main() {
    int n, flag = 1;
    scanf("%d", &n);

    int A[100][100];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(A[i][j] != A[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Symmetric");
    else
        printf("Not Symmetric");

    return 0;
}