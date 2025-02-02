#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(i=0;i<=n-1;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d ",min);
    printf("%d",max);
}   