#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum[n];
    int s=0;
    int i;
    for(i=0;i<=n-1;i++){
        scanf("%d",&sum[i]);
    }
    for(i=0;i<=n-1;i++){
        s=s+sum[i];
    }
    printf("%d",s);
    return 0;
}