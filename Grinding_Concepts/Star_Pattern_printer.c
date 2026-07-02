#include<stdio.h>

int main(){
    int n;
    printf("Enter no of times: ");
    scanf("%d",&n);
    int i = 1;
    while (i<=n){
        int a=1;
        while (a<=i){
            printf("* ");
            a++;
        }
        printf(" \n");
        i++;
    }
    return 0;
}