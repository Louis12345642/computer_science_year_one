#include <iostream>
using namespace std;

int main()
{

    // this the 5x5 matrix

    int matrix_one[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}

    };
    int matrix_two[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}

    };
    // this variable holds the maxium number
   
    // here we using nested for loops to subtract all the  number
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++){
          cout<<"subtracting matrix: "<<(matrix_one[i][j]-matrix_two[i][j])<<endl;
        }
       

    }


    return 0;
}