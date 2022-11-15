#include <iostream>
#include <string>
#include "PostCalculator.h"

using namespace std;

int main() {
    string postExp1 = "42*8+";
    string postExp2 = "123+*4/";

    cout << postExp1 << " = " << EvalRPNExp(postExp1) << endl;
    cout << postExp2 << " = " << EvalRPNExp(postExp2) << endl;

    return 0;
}