#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    queue<int> deck;

    cin >> N;

    for (int i = 0; i < N; i++) {
        deck.push(i + 1);
    }

    while (deck.size() > 1) {
        deck.pop();
        int tmp = deck.front();
        deck.pop();
        deck.push(tmp);
    }

    cout << deck.front() << '\n';
    
    return 0;
}