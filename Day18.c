#include <stdio.h>

int main() {
    int n, arr[100], freq[100] = {0};

    printf("Enter size: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        if(freq[i] == -1) continue;

        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = -1;
            }
        }
        freq[i] = count;
    }

    for(int i = 0; i < n; i++) {
        if(freq[i] != -1)
            printf("%d -> %d\n", arr[i], freq[i]);
    }

    return 0;
}