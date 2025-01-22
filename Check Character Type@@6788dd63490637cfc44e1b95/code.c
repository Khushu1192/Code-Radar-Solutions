#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        printf("Vowels\n");
    }
    else{
        printf("Consonant\n");
    }
    if(a>=0 && a<=9){
        printf("Digit\n");
    }
    else{
        printf("Special Character\n");
    }

    return 0;
}