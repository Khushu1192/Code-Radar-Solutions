#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i,j,sum;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            sum=sum+1;
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}