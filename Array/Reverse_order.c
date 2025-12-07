#include <stdio.h>

int main() {
    int n;
    
    // Taking input for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Taking input for the array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Printing the array elements in reverse order
    printf("The integers in reverse order are: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
