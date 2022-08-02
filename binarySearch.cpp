#include <iostream>
using namespace std;

void printArray(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << endl;
    }
}
int bubbleSort(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {

        int mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
};

int main()
{
    int input[] = {455, 45, 456, 456};
    cout << bubbleSort(input, 4, 4);
}