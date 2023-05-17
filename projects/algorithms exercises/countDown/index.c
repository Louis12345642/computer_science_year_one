#include <stdio.h>
int countDown(int n)
{
    // analysing the algorithm

    // analysing the space complexity

    for (int i = 0; i < n; i++)
    {
        // the space complexity of the loop is O(1) because no variable
        // the time complexity is O(n) for the loop
        printf("%d", n - i);

        // the  time complexity of the print_function is o(1)
        //  the total time complexity is O(n)
    }
}

// creating the recursion method
int recursive_countor(int n)
{
    // creating the condition

    if (n > 0)

    // analysing the algorithm
    {
        // o(1) for printing the result of n
        printf("%d", n);
        // O(1) for the recusive counter
        recursive_countor(n - 1);

        // total time complexity O(1)
    }
}
int main()
{
    int n = 6;

    //  countDown(n);

    recursive_countor(n);

    return 0;
}