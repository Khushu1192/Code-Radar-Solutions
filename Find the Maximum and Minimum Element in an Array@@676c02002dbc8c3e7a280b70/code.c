#include <stdio.h>


int main() {
    int n[];
    int max=n[0];
    int min=n[0];
    int i;
    for(i=0;i<=n-1;i++){
        if(max>n[i]){
            max=n[i];
        }
        else if(min<n[i]){
            min=n[i];
        }
    }
    printf("%d",max);
    printf("%d",min);
}