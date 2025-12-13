#include<stdio.h>
int main (){
    int  n,count=0,ch;
    printf("Enter element of array:");
    scanf("%d",&n);
    char arr1[n];
    for (int i=0;i<=n;i++)
    {
        scanf ("%c",&arr1[i]);
    }
    for (int i=0;i<=n;i++)
    {
        printf ("%c",arr1[i]);
    }
    for (int i=0;i<=n;i++){
    ch=arr1[i];
   if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
           {
               count++;
           }
    }
           printf("\ncount=%d",count);
    
}
