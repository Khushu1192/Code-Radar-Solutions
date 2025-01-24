#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%c",&n);
    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            printf("%c",65+j);
        }
        printf("\n")
    }
    return 0;
}