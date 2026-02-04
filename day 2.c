#include <stdio.h>

int main() {
    int n, pos;
    
    // Read number of elements
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read position to delete (1-based)
    scanf("%d", &pos);
    
    // Sh
