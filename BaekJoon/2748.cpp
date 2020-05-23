#include <bits/stdc++.h>

using namespace std;

long long memo[100];

// int fibo(int n)
// {
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;
    
//     return fibo(n - 1) + fibo(n - 2);
// }

long long fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (!memo[n]) 
        memo[n] = fibo(n - 1) + fibo(n - 2);
    return memo[n];
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    cout << fibo(n);

    return 0;
}