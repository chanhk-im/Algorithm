#include <iostream>
#include "test.h"

using namespace std;

int main() {
    Test<int> test;
    test.setNum(3, 5);
    cout << test.getAdd() << '\n';
}