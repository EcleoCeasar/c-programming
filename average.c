#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(){

//Write a C program to input marks of five subjects Physics, Chemistry, Biology,
//Mathematics and Computer. Calculate average and grade according to following:

float Physics, Chemistry, Biology, Mathematics, Computer, total_grade, average;

    printf("Enter your grade on Physics    : ");
    scanf("%f", &Physics);

    printf("Enter your grade on Chemistry  : ");
    scanf("%f", &Chemistry);

    printf("Enter your grade on Biology    : ");
    scanf("%f", &Biology);

    printf("Enter your grade on Mathematics: ");
    scanf("%f", &Mathematics);

    printf("Enter your grade on Computer   : ");
    scanf("%f", &Computer);

    total_grade = Physics + Chemistry + Biology + Mathematics + Computer;
    average = total_grade/N;

    printf("\nYour total grade is %.2f", total_grade);
    printf("\nAverage grade %.2f ", average);

    if(average >= 90){
        printf("A");
    }else if(average >= 80){
        printf("B");
    }else if(average >= 70){
        printf("C");
    }else if(average >= 60){
        printf("D");
    }else if(average >= 50){
        printf("E");
    }else if(average < 50){
        printf("F");
    }


    return 0;
}