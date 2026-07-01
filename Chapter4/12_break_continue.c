#include<stdio.h>

int main(){
    for (int i=0; i<13; i++)
    {
        if (i==6){
            break;//This means Exit the loop now!
        }
        printf("i is %d\n",i);
    }
    return 0;
}