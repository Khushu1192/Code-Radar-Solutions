#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(0!<a){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}