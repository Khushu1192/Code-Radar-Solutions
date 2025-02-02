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
        int num=arr[i];
        while(num>0){
            mod=num%10;
            sum=sum+mod;
            num=num/10;
    }
}
    printf("%d",sum);
    return 0;
}