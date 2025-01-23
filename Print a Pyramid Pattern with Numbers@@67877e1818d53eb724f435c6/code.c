#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i;
    int j;
    int k;
    for(i=0;i<n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",j);
        }
    }
    return 0;
}

