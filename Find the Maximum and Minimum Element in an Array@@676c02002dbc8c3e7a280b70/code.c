#include <stdio.h>


int main() {
    int a[n];
    int max=n[0];
    int min=n[0];
    int i;
    for(i=0;i<=n-1;i++){
        if(max>a[i]){
            max=a[i];
        }
        else if(min<a[i]){
            min=a[i];
        }
    }
    printf("%d",max);
    printf("%d",min);
}