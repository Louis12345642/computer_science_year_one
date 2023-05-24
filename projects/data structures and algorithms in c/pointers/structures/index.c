#include<stdio.h>
//a structure is a collection of variable kinda like an object in javascript or a class

struct player {
char name[10];
int age;
};






int main(){

    struct player p;

strcpy(p.name,"mkay");
int age =p.age =6;
struct player p1;

p1.age=29;
printf("%d",p1.age);

printf("%d",age);
printf("%s",p.name);



//adding using pointers in a function




    return 0;
}