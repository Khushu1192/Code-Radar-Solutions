#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i,j
    int sum=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            sum=sum+1;
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}