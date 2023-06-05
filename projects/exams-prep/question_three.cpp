#include <iostream>

using namespace std;

int findMin(int arr[])
{

    int min = arr[0];
    // int arrSize = sizeof(arr) / 4;

    for (int i = 1; i < 8; i++)
    {
        if (min > arr[i])
        {

            min=arr[i];
            return min;
        }
    
    }
}

int main()
{

    int arr[8] = {8, 1, 3, 2, 56, 7, 89, 69};
    int minNum = findMin(arr);

    cout << "the min number in the array is: " << minNum << endl;

    return 0;
}