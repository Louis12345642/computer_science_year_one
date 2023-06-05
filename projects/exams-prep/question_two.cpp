#include <iostream>
using namespace std;

int getSumOfN(int num)
{
    int sum = 0;

    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{

    int number;
    cout << "Enter the number" << endl;
     cin >> number;

    int result = getSumOfN(number);

    cout << "the result of the sum is: " << result << endl;
    return 0;
}