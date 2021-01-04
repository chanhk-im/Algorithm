#include <bits/stdc++.h>

using namespace std;

typedef struct _ball
{
    int c, s, idx;
} Ball;

bool compare(Ball &b1, Ball &b2)
{
    if (b1.s != b2.s)
        return b1.s < b2.s;
    else
        return b1.c < b2.c;
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int b_cnt[200005] = {0, };
    int color_iter[200005] = {0, };
    int color, n;
    int max_color = 0;
    
    cin >> n;
    vector<Ball> ball(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ball[i].c >> ball[i].s;
        ball[i].idx = i;
    }

    sort(ball.begin(), ball.end(), compare);

    for (int i = 0; i < n; i++)
    {
        if (ball[i].c == ball[color_iter[ball[i].c]].c)
        {
            b_cnt[ball[i].idx] = b_cnt[ball[color_iter[ball[i].c]].idx];
        }
        for (int j = color_iter[ball[i].c]; j < i; j++)
        {
            if (ball[i].c != ball[j].c)
            {
                b_cnt[ball[i].idx] += ball[j].s;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << b_cnt[i] << '\n';
    }
    
    return 0;
}