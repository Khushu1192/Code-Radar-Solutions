#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N[n];
    int count=0;
    int c=0;
    int i;
    for(i=0;i<=n-1;i++){
        if(N[i]%2==0){
            count++;
        }
        else if(N[i]%2!=0){
            c++;
        }
    }
    printf("%d",count);
    printf("%d",c);
    return 0;
}