#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    cout << "vec: size: " << vec.size()
    << " capacity:  " << vec.capacity() << endl;
    for(int i =0;i<24;i++)
    {
        vec.push_back(i);
        cout << "vec: size: " << vec.size()
        << " capacity:  " << vec.capacity() << endl;
    }

    return 0;
}
