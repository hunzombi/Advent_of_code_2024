#include <bits/stdc++.h>

using namespace std;

int x, y;
vector<int> a;
int cnt[1000001];

int main()
{
    long long res = 0;
    for (int i=0; i < 1000; i++){
        cin >> x >> y;
        a.push_back(x);
        cnt[y]++;
    }
    for (int i=0; i < a.size(); i++){
        res += a[i]*cnt[a[i]];
    }
    cout << res << '\n';
    return 0;
}
