#include <stdio.h>
void index(int arr[],int n,int m);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    int c=index(arr,n,m);
    printf("%d",c);
    return 0;
}
void index(int arr[],int n,int m){
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
}