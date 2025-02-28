#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=0;
    int k=1;
    while(k<=n){
        if(arr[i]<arr[j]){
            i++;
            j++;
        }
        else{
            printf("Not Sorted");
            return 0;
        }
    }
    printf("Sorted");
    return 0;
}