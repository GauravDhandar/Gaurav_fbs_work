#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array are:\n");
    for (int i = 0; i < n; i++) {
        int count = 0;
        int num = arr[i];

        for (int j = 1; j <= num; j++) {
            if (num % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d ", num);
        }
    }
    return 0;
}