#include <iostream>
using namespace std;

int factorial(int n)
{
    // cout << n << endl;
    //  base case
    if (n == 0)
    {
        return 1;
    }
    // small calculation
    int smallOutput = factorial(n - 1);
    // fact(5)=5*fact(4)
    return n * smallOutput;
}

int main()
{
    int n;
    cin >> n;
    int output = factorial(n);
    cout << output << endl;
}