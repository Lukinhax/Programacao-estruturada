
#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
    int i= 1;
    while (i <= 100)
    {
        if (i % 10 == 0)
        {
            cout << i << endl;
        }
        i= i+1;
    }
    return 0;
}

