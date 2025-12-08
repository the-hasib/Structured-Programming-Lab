#include <stdio.h>
int main (){
    int arr[100],i,n,sum=0;
    printf("Enter value:");
    scanf("%d",&n);


    for (i=0;i<n;i++){
 scanf("%d",&arr[i]);
    }
        for (i=0;i<n;i++){
            if(arr[i]%2==0)
            sum+=arr[i];
 
    }
    printf("%d",sum);
    
}