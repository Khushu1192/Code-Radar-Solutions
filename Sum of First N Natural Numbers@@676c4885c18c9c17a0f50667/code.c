#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i;
    int sum=0;
    for(i=1;i>=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}