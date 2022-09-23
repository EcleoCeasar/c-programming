#include <stdio.h>

int main(){
    
    int num, bonus, i;
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("\n%d is positive\n", num);
    }else if(num < 0){
        printf("\n%d is negative\n", num);
    }else{
        printf("\nyou enter 0\n");
    }

    if(num % 2 == 0){
        printf("%d is even", num);
    }else{
        printf("%d is odd", num);
    }

    return 0;
}