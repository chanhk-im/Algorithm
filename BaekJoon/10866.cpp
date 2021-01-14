#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX;

int N;

void push_front(int x) {
    dat[--head] = x;
}

void push_back(int x) {
    dat[tail++] = x;
}

void pop_front() {
    head++;
}

void pop_back() {
    tail--;
}

int front() {
    return dat[head];
}

int back() {
    return dat[tail - 1];
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> N;
    for (int i = 0 ; i < N; i++) {
        string cmd;
        cin >> cmd;

        if (cmd == "push_front") {
            int X;
            cin >> X;

            push_front(X);
        }
        else if (cmd == "push_back") {
            int X;
            cin >> X;

            push_back(X);
        }
        else if (cmd == "pop_front") {
            if (head == tail) {
                cout << "-1\n";
            }
            else {
                cout << front() << "\n";
                pop_front();
            }
        }
        else if (cmd == "pop_back") {
            if (head == tail) {
                cout << "-1\n";
            }
            else {
                cout << back() << "\n";
                pop_back();
            }
        }
        else if (cmd == "size") {
            cout << tail - head << '\n';
        }
        else if (cmd == "empty") {
            if (head == tail) {
                cout << "1\n";
            }
            else {
                cout << "0\n";
            }
        }
        else if (cmd == "front") {
            if (head == tail) {
                cout << "-1\n";
            }
            else {
                cout << front() << '\n';
            }
        }
        else if (cmd == "back") {
            if (head == tail) {
                cout << "-1\n";
            }
            else {
                cout << back() << '\n';
            }
        }
    }
    
    return 0;
}