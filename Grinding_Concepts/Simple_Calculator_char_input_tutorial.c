#include<stdio.h>

int main(){
    float num_1;
    printf("Enter First Number: ");
    scanf("%f",&num_1);
    float num_2;
    printf("Enter Second Number: ");
    scanf("%f",&num_2);
    char operation;
    printf("Which operation would you like to perform out of +, -, *, /?: ");
    scanf(" %c", &operation);//How the Space Fixes It? When you change it to scanf(" %c", &operation); (notice the space before the %), you are giving a specific command to C:"Hey, skip any spaces, tabs, or newlines (\n) that are currently sitting on the conveyor belt, and wait until the user types a fresh, actual character."
    if (operation=='+'){
        printf("Result = %f\n", num_1 + num_2);
    }
    else if (operation=='-'){
        printf("Result = %f\n", num_1 - num_2);
    }
    else if (operation=='*'){
        printf("Result = %f\n", num_1 * num_2);
    }
    else if (operation=='/'){
        if (num_2==0){
            printf("Invalid Operation.");
        }
        else{
            printf("Result = %f\n", num_1 / num_2);
        }
    }
    else{
        printf("Invalid Operation.");
    }
    return 0;
}
