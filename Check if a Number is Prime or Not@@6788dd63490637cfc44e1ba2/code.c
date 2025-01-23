#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i;
    if(i%n/2==0){
        printf("Not prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}