#include <stdio.h>

// step one we need a function with two inputs target and array
int linearSearch(int arr[], int target)
{

    // get the size of the array
    int size = 9;

    // loop througth the array
    for (int i = 0; i < size; i++)
    {
        // check is the target exist in the  array
        if (arr[i] == target)
        {
            return 1;
            break;
        }
    }

    return -1;
}

void verify(int targetValue)
{
    if (targetValue == 1)
    {
        printf("target found ");
    }
    else
    {
        printf("target not found");
    }
}


int nasted_loops( int n){
    int i=0;
    int j=0;
for(i; i<n;i++){
 for(j;i<n;j++){
    printf("%d",i);
printf("%d",j);
 }
}
}


int main()
{

    int list[] = {1, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 100;
    int result = linearSearch(list, target);

    verify(result);
   nasted_loops(4);
 
    return 0;
}