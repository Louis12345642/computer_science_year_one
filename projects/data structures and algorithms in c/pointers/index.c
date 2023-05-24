#include <stdio.h>

int test_val(int *a, int *b){

return *a+*b;
}

int main(){

    //creating a pointer in c
    // a pointer is a special variable that stores the adress of another variable

    int x=8;
     int *pointer_x;
     pointer_x =&x;

    //  printf("am now pointing to x is  %d",*pointer_x);

   int A =8;
   int B =8;
   
     printf("%d",test_val(2,3));
     int i =56;
      int *p,*q;
      p=&i;
      p=q;

    //   printf("%d,%d",*p,*q);



    return 0;
}

