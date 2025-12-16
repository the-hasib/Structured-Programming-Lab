#include <stdio.h>

int main() {
    int n, a,b,count=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr1[n];
    printf("Enter %d integers for array A:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter a number:");
    
        scanf("%d",&a);
        printf("Enter a position index number:");
        scanf("%d",&b);
        for (int i=0;i>b;i--)
        {
              arr1[i] = arr1[i - 1];

        }    
            arr1[b] = a;
 
         printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

}