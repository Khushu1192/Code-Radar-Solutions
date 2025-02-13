#include <stdio.h>
int index(int arr[],int n,int t){
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
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);
    int x=index(arr,n,t);
    printf("%d",x);
    return 0;
}
