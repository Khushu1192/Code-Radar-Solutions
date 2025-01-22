#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    if(a>b){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    return 0;
}