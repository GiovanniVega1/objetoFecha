#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date a(5, 20, 22);
    cout << a.getDay();
    ++a;
    cout << a.getDay();

    return 0;
}
