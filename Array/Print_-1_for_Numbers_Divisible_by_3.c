#include<stdio.h>
int main (){
    int n,i,arr[100];
    printf("Enter N number of element:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for (i=0;i<n;i++)
    {
        if (arr[i]%3==0)
        printf("-1 ");
        else 
        printf(" %d",arr[i]);
    }
}