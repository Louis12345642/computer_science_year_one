#include <iostream>
using namespace std;

// creating input function
int input_one()
{
    int a;

    cout << "Enter number one" << endl;
    cin >> a;

    return a;
}
//this function allows us to the first input 
int input_two()
{
    int b;
    cout << "Enter number two" << endl;
    cin >> b;
    return b;
}

// a function to compare the largest value

int getLargeValue(int InputOne, int InputTwo)

{

    if (InputOne < InputTwo)
    {
        return InputTwo;
    }
    else if (InputOne == InputTwo)
    {
        return InputOne;
    }
    else
    {
        return InputOne;
    }
}


//this function displays the largest variable
int Display()
{
    int InputOne = input_one();
    int InputTwo = input_two();
    int largestNumber = getLargeValue(InputOne, InputTwo);

    return largestNumber;
}

int main()
{
    // this variable holds the largest value
    int results = Display();
    cout << "The largest number: " << results << endl;
    return 0;
}