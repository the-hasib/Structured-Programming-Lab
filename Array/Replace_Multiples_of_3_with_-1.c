#include<stdio.h>
int main (){
    int n,sum1=0,sum2=0,result=0;
    printf("Enter elemen t of array:");
    scanf("%d",&n);
    int arr1[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr1[i]);
    }
    for (int i=0;i<n;i++)
    {
        if (arr1[i]%3==0){
            arr1[i]=-1;
        }

    }
    for (int i=0;i<n;i++)
    {
       printf("%d ",arr1[i]);
        }

    
    

}