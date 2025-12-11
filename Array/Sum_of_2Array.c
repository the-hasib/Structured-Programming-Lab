#include<stdio.h>
int main (){
    int n,sum1=0,sum2=0,result=0;
    printf("Enter elemen t of array:");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr1[i]);
    }printf("Array1 =");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);

    }
        for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr2[i]);
    }printf("Array2 =");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);

    }
    for (int i=0;i<n;i++)
    {
        sum1+=arr1[i];
    }
        for (int i=0;i<n;i++)
    {
        sum2+=arr2[i];
    }
            for (int i=0;i<n;i++)
    {
        result=sum1+sum2;
    }
    
    printf("\ntotal sum=%d",result);






}