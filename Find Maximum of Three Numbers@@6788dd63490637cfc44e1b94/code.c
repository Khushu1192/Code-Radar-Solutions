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
    if(b<a>c){
        printf("%d",a);   
    }
    else if(a<b>c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    return 0;
}