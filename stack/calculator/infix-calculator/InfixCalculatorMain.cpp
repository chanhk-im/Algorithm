#include <iostream>
#include <string>
#include "InfixCalculator.h"

using namespace std;

int main() {
    string exp1 = "1+2*3";
    string exp2 = "(1+2)*3";
    string exp3 = "((1-2)+3)*(5-2)";

    cout << exp1 << " = " << EvalInfixExp(exp1) << endl;
    cout << exp2 << " = " << EvalInfixExp(exp2) << endl;
    cout << exp3 << " = " << EvalInfixExp(exp3) << endl;

    return 0;
}