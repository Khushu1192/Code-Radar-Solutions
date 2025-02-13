#include <stdio.h>
void index(int arr[],int n,int t);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&m);
    int c=index(arr,n,t);
    printf("%d",c);
    return 0;
}
void index(int arr[],int n,int t){
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
}