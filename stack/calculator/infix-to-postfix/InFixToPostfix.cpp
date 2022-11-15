#include <iostream>
#include <string>
#include <stack>
#include <cctype>

#include "InFixToPostfix.h"

using namespace std;

int GetOpPrec(char op) {
    switch(op) {
    case '*':
    case '/':
        return 5;
    case '+':
    case '-':
        return 3;
    case '(':
        return 1;

    default:
        return -1;
    }
}

int WhoPrecOp(char op1, char op2) {
    int op1Prec = GetOpPrec(op1);
    int op2Prec = GetOpPrec(op2);

    if (op1Prec > op2Prec) return 1;
    else if (op1Prec < op2Prec) return -1;
    
    return 0;
}

void ConvToRPNExp(string& exp) {
    stack<char> bucket;
    int expLen = exp.length();

    char *convExp = (char *)malloc(sizeof(char) * (expLen + 1));

    fill(convExp, convExp + (sizeof(char) * (expLen + 1)), 0);
    int idx = 0;
    char tok, popOp;
    for (int i = 0; i < expLen; i++) {
        tok = exp[i];
        if (isdigit(tok)) {
            convExp[idx++] = tok;
        }
        else {
            switch(tok) {
            case '(':
                bucket.push(tok);
                break; 
            case '+': case '-':
            case '*': case '/':
                while (!(bucket.empty()) && WhoPrecOp(tok, bucket.top()) != 1) {
                    popOp = bucket.top();
                    bucket.pop();
                    convExp[idx++] = popOp;
                }
                bucket.push(tok);
                break;
            
            case ')':
                while (bucket.top() != '(') {
                    popOp = bucket.top();
                    bucket.pop();
                    convExp[idx++] = popOp;
                }
                bucket.pop();
                break;
            }
        }
    }
    while (!(bucket.empty())) {
        popOp = bucket.top();
        bucket.pop();
        convExp[idx++] = popOp;
    }
    exp.clear();

    for (int i = 0; i < idx; i++) {
        exp.push_back(convExp[i]);
    }
    free(convExp);
}