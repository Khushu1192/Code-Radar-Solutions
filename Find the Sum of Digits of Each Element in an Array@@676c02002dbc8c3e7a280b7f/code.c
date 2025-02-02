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
        int num=n;
        int sum=0;
        int mod=1;
    while(arr[num]>0){
        mod=arr[num]%10;
        sum=sum+mod;
        num=num/10;
    }
}
    printf("%d",sum);
    return 0;
}