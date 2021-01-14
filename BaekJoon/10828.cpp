#include <bits/stdc++.h>

using namespace std;

int int_stack[10005];
int tail = 0;
int N;

void push(int x) {
    int_stack[tail++] = x;
}

int pop() {
    if (tail == 0) {
        return -1;
    }
    int res = int_stack[tail - 1];
    tail--;
    return res;
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> N;

    for (int i = 0; i < N; i++) {
        string cmd;
        
        cin >> cmd;

        if (cmd == "push") {
            int X;
            cin >> X;

            push(X);
        }
        else if (cmd == "pop") {
            cout << pop() << '\n';
        }
        else if (cmd == "size") {
            cout << tail << '\n';
        }        
        else if (cmd == "empty") {
            cout << (tail == 0 ? 1 : 0) << '\n';
        }
        else if (cmd == "top") {
            cout << (tail == 0 ? -1 : int_stack[tail - 1]) << '\n';
        }
    }
    
    return 0;
}