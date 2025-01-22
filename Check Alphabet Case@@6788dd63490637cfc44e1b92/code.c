#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    if(a==uppear(a)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}