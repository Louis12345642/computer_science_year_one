#include <stdio.h>

//implementing learner search here
int learer_search(int target,int list[]){

    int list_size = sizeof(list)/4;

    for (int i = 0; i < list_size; i++)
    {
   if (list[i]==target)
   {
  return i;
   }
   
    }
    return -1;
    
}

void verify(int results){
if (results == -1)
{
printf("the target not found");
}
else{
    printf("the target found at position %",results);
}

}
int main(){

int items[] ={1,2,3,4,5,6,7,8,9};
int target = 3;
int restult =learer_search(target,items);


printf("%d",restult);
verify(restult);


    return 0;
}