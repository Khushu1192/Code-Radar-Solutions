#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i;
    int j;
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}