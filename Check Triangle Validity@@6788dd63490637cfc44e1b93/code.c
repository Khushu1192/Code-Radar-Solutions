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
    int sum=a+b;
    if(sum>c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}