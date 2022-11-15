#include <string>
#include <cctype>
#include <stack>

using namespace std;

int EvalRPNExp(string& exp) {
    stack<int> stack;
    int expLen = exp.length();
    char tok, op1, op2;

    for (int i = 0; i < expLen; i++) {
        tok = exp[i];
        if (isdigit(tok)) {
            stack.push(tok - '0');
        } 
        else {
            op2 = stack.top();
            stack.pop();
            op1 = stack.top();
            stack.pop();

            switch(tok) {
            case '+':
                stack.push(op1 + op2);
                break;
            case '-':
                stack.push(op1 - op2);
                break;
            case '*':
                stack.push(op1 * op2);
                break;
            case '/':
                stack.push(op1 / op2);
                break;
            }
        }
    }
    
    return stack.top();
}