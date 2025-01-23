#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==2 || j==2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
    return 0;
}