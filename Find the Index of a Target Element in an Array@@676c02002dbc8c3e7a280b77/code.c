#include <stdio.h>
void index(int arr[],int n,int t){
    int i;
    int c=-1
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            printf("%d",i);
            return 0;
        }
    }
    printf("%d",c);
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
    index(arr,n,t);
    return 0;
}
