#include <string>
#include <cctype>
#include "../infix-to-postfix/InFixToPostfix.h"
#include "../post-calculator/PostCalculator.h"

using namespace std;

int EvalInfixExp(string& exp) {
    int expLen = exp.length();
    int ret;
    string expcpy;
    expcpy.assign(exp);

    ConvToRPNExp(expcpy);
    ret = EvalRPNExp(expcpy);

    return ret;
}