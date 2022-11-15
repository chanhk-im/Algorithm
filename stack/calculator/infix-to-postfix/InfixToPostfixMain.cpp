#include <iostream>
#include <string>
#include <stack>
#include "InFixToPostfix.h"

using namespace std;

int main() {
    string exp1 = "1+2*3";
    string exp2 = "(1+2)*3";
    string exp3 = "(8-2*3)/4";

    ConvToRPNExp(exp1);
    ConvToRPNExp(exp2);
    ConvToRPNExp(exp3);

    cout << exp1 << endl;
    cout << exp2 << endl;
    cout << exp3 << endl;

    return 0;
}