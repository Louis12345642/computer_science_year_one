#include <iostream>
using namespace std;

int main()
{

    // this the 5x5 matrix

    int matrix[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}

    };
    // this variable holds the maxium number
    int max = matrix[0][0];
    // here we using nested for loops to find the largest number
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            if (max < matrix[i][j])
            {
                max = matrix[i][j];
            }
        }
    }

    // returning the largest number

    cout << "The maxium number is :" << max << endl;

    return 0;
}