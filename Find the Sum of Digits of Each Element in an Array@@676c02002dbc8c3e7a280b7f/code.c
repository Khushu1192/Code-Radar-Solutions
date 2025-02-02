#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++){
        int sum=0;
        int mod=1;
    while(arr[i]>0){
        mod=arr[n]%10;
        sum=sum+mod;
        n=n/10;
    }
}
    printf("%d",sum);
    return 0;
}