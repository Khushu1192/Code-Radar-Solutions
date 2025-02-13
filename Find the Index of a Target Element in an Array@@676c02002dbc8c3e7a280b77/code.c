#include <stdio.h>
int index(int arr[],int n,int t){
    int i;
    int c=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            return i;
        }
    }
    return c;
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
    printf("%d",index(arr,n,t));
    return 0;
}
