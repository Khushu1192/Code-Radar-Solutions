#include <stdio.h>
int index(int n){
    int t;
    scanf("%d",&t);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",index(n));
    return 0;
}
