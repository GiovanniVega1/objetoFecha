#include <iostream>
//#include "Date.h"
#include "Menu.h"
using namespace std;

class principal {
private:
    Menu men;
public:
    void run();
};

int main()
{
    principal pri;
    pri.run();
    /*Date a(2, 29, 2020);
    cout << a.getDay();
    ++a;
    cout << a.getDay();*/

    return 0;
}

void principal::run() {
    men.menu();
}
