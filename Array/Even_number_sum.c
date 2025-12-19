#include <stdio.h>
int main (){
    int arr[100],i,n,sum=0;
    printf("Enter Nth array number:");
    scanf("%d",&n);

printf("Enter value:");
    for (i=0;i<n;i++){
 scanf("%d",&arr[i]);
    }
        for (i=0;i<n;i++){
            if(arr[i]%2==0)
            sum+=arr[i];
    }
    printf("%d",sum);
    
}