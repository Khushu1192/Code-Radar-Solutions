#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n/2;i++){
        if(i%n==0){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}