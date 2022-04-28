#include <iostream>
#include "random.cpp"
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Random float: " << randomFloat(0, 10) << endl;
        cout << "Random int: " << randomInt(0, 10) << endl;
    }
}