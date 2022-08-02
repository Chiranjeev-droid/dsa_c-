#include <iostream>
using namespace std;
#include <vector>

int main()
{
    // statically allocating memory.
    vector<int> v;
    // dynamically allocating memory.
    // vector<int> *vp = new vector<int>();
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v[1] = 100;
    v[4] = 133;
    v.push_back(50); // push_back will check capacity/size and will allocate memory if needed but the samething not happens when we do it with square brackets[].
    v.push_back(60);
    cout << v[0] << endl;
    cout << v.at(1) << endl;
    cout << v.at(2) << endl;
    cout << v.at(3) << endl;
    cout << v.at(4) << endl;

    cout << v[5] << endl; // garbage value
    // cout << v.at(5) << endl; //will give out of range error. So at is safer to use when compared with square bracket[].
    cout << "Size: " << v.size() << endl;
}