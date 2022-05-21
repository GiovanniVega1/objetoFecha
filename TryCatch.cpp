#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date a(2, 29, 2020);
    cout << a.getDay();
    ++a;
    cout << a.getDay();

    return 0;
}
