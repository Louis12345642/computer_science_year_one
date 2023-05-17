
#include <stdio.h>
// pseodocode

// a program to find the average of six numbers

int main()
{
    // step one Get the input of the six numbers
    int num1, num2, num3, num5, num6, num4;
    int sum =0;

    // get the input of the six numbers
    printf("Enter number one");
    scanf("%d",&num1);
    sum+=num1;
    printf("Enter number two");
     scanf("%d",&num2);
       sum+=num2;
    printf("Enter number three");
     scanf("%d",&num3);
       sum+=num3;
    printf("Enter number four");
     scanf("%d",&num4);
       sum+=num4;
    printf("Enter number five");
     scanf("%d",&num5);
       sum+=num5;
    printf("Enter number six");
     scanf("%d",&num6);
     sum+=num6;

     //calculate the average

    int average = sum/6;

    printf("The average of the six numbers is: %d",average);

     

    return 0;
}