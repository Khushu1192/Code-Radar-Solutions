#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i;
    int j;
    for (i=1;i<=2;i++){
        for (j=1;j<=2;j++){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}