#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1;
    scanf("%d",&n1);
    int n2;
    scanf("%d",&n2);
    if(n1==n2*n2){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}