#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int c;
    scanf("%d",&c);
    if(a==b==c){
        printf("Equilateral");
    }
    else if(a==b!=c){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}