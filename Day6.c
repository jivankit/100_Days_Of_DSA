#include <stdio.h>

int main() {
    int arr[100], n, j = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n-1; i++) {
        if(arr[i] != arr[i+1]) {
            arr[j++] = arr[i];
        }
    }

    arr[j++] = arr[n-1];

    for(int i = 0; i < j; i++)
        printf("%d ", arr[i]);

    return 0;
}