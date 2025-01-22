#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int cost_price;
    scanf("%d",&cost_price);
    int selling_price;
    scanf("%d",&selling_price);
    if(cost_price>selling_price){
        printf("Loss");
    }
    else if(cost_price==selling_price){
        printf("No Profit No Loss");
    }
    else{
        printf("Profit");
    }
    return 0;
}