#include <stdio.h>

int main() {
    int n, pos, x;

    // Input size
    scanf("%d", &n);

    int arr[1000];   // enough size for n+1 elements

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position (1-based)
    scanf("%d", &pos);

    // Input element to insert
    scanf("%d", &x);

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos - 1] = x;

    // Print updated array
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
