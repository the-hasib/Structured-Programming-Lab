#include <stdio.h>

int main() {
    int n, m,count=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr1[n];
    printf("Enter %d integers for array A:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter a number for found this number index number:");
    
        scanf("%d",&m);
    
    for (int i=0;i<=n;i++)
    {
        if (m==arr1[i]){
        printf("%d ",i);
        count++;
 
        }
    }
    if(!count)
       printf("NOT FOUND");
     




    return 0;
}