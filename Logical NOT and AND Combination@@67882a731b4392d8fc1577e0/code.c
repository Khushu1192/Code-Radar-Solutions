#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    if(a>0 || b>0){
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
}