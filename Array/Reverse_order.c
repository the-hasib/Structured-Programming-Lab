#include <stdio.h>

int main() {
    int n;
    
    // Input the number of elements
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    
    // Declare arrays A and B of size n
    int A[100], B[100];
    
    // Input the integers into array A
    printf("Enter %d integers for array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
         }
    
    // Copy elements from array A to array B in reverse order
for (int i = 0; i < n; i++) {
        B[i] = A[n - i - 1];
    }
    
    // Print array A
    printf("Array A: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    // Print array B
    printf("Array B: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    
    return 0;
}

