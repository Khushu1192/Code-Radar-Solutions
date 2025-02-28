#include <stdio.h>
void swap(int arr[],int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    
    scanf("%d",&k);
    k=k%n;
    swap(arr,0,n-1);
    swap(arr,0,k-1);
    swap(arr,k,n-1);
    
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }



    return 0;
}