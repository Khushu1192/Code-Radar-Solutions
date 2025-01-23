#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i;
    if(n>1){
        printf("Prime");
    }
    else {
        for(i=2;i<=sqrt(n);i++){
            if(i%n==0){
                printf("Not Prime");
        }
            else{
                printf("Prime");
        }
    }
}
    return 0;
}