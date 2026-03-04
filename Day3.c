#include <stdio.h>

int main() {
    int arr[100], n, key, found = 0, count = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        count++;
        if(arr[i] == key) {
            printf("Found at position %d\n", i+1);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Not Found\n");

    printf("Comparisons: %d", count);

    return 0;
}