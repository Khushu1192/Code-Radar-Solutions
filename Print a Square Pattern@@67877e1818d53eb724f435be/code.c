#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n;
    scanf("%c",&n);
    int i;
    int j;
    for (i=1;i<=2;i++){
        for (j=1;j<=2;j++){
            printf("%c",n);
        }
    }
    printf("\n");
    return 0;
}