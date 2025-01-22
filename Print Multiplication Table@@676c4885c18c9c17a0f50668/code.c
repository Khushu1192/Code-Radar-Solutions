#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int mod=1;
    int i;
    for(i=1;i<=10;i++){
        mod=n*i;
        printf("%d x %d=%d\n",n,i,mod);
    }
    return 0;
}