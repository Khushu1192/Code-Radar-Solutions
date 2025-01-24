#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i<=n;i<=1;i++){
        for(j=1;j<=i;j--){
            printf("%c",j+65);
        }
        printf("\n");
    }
    return 0;
}