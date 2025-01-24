#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
        for(j<=i;j=1;j--){
            printf("%c",65+j);
        }
        printf("\n");
    }
    return 0;
}