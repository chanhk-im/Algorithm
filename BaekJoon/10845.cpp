#include <bits/stdc++.h>

using namespace std;

const int MX = 2000005;
int dat[MX];
int head = 0, tail = 0;

int N;

void push(int x) {
    dat[tail++] = x;
}

void pop() {
    head++;
}

int front() {
    return dat[head];
}

int back() {
    return dat[tail - 1];
}

int main() {
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
            if (head == tail) {
                cout << -1 << '\n';
            }
            else {
                cout << front() << '\n';
                pop();
            }
        }
        else if (cmd == "empty") {
            if (head == tail) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if (cmd == "size") {
            cout << tail - head << '\n';
        }
        else if (cmd == "front") {
            if (head == tail) {
                cout << -1 << '\n';
            }
            else {
                cout << front() << '\n';
            }
        }
        else if (cmd == "back") {
            if (head == tail) {
                cout << -1 << '\n';
            }
            else {
                cout << back() << '\n';
            }
        }
    }
    
    return 0;
}