#include <iostream>
using namespace std;

class StackUsingArray{
    int *data;
    int nextIndex;
    int capacity;
    public:
    StackUsingArray(int totalsize)
    {
        data =new int[totalsize];
        nextIndex = 0;
        capacity = totalsize;
    }
};

int main(){

}