#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}