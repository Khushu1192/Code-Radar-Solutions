#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i,j,sum=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            sum=sum+j;
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}