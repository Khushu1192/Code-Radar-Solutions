#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%c ",j+65);
        }
        printf("\n");
    }
    return 0;
}