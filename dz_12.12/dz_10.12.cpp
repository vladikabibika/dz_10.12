#include "Flat.h"
#include <iostream>

using namespace std;

int main() {
    Flat flat1(50, 100000);
    Flat flat2(75, 150000);

    if (flat1 == flat2) {
        cout << "Flats have the same area" << endl;
    }
    else {
        cout << "Flats have different areas" << endl;
    }

    Flat flat3;
    flat1.display();
    flat3 = flat1;
    cout << "flat3 after assignment:" << endl;
    flat3.display();

    if (flat2 > flat1) {
        cout << "Flat 2 is more expensive than Flat 1." << endl;
    }
    else {
        cout << "Flat 1 is more expensive than Flat 2." << endl;
    }

    return 0;
}