#include <iostream>

using namespace std;

int mulAlg (int a, int b) {
    int value = 0;
    while (a) {
        a--;
        value += b;
    }
    return value;
}

int main () {
    cout << "5 x 3 =" << mulAlg(5, 3) << endl;
}
