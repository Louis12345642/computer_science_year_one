#include <iostream>
using namespace std;

// classes in c
class Player
{

public:
    int x, y;

    void setSize(int t, int b)
    {
        x = t;
        y = b;
    }
    int getSize()
    {

        int product = x * y;
        return product;
    }
};

class ArrayCal
{
public:
    int sum = 0;
    int size(int nums[])
    {
        for (int i = 0; i < 5; i++)
        {
            sum += nums[i];
        }

        return sum;
    }
};

int main()
{
    Player mubarak;

    mubarak.setSize(2, 4);
    int size = mubarak.getSize();

    cout << "the size is: " << size << endl;

    int numbers[] = {1, 2, 3, 4, 5};

    ArrayCal mkay;
    int result = mkay.size(numbers);

    cout << "the sum of all is:" << result << endl;

    return 0;
}