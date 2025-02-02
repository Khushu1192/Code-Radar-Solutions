#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    iint mod=1;
    int sum=0;
    int i;
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int num=n;
    while(arr[num]>0){
        mod=arr[num]%10;
        sum=sum+mod;
        num=num/10;
    }
    printf("%d",sum);
    return 0;
}