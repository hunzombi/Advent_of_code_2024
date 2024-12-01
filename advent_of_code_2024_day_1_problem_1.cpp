#include <bits/stdc++.h>

using namespace std;

int x, y;
vector<int> a, b;

int abs(int kk){
    if (kk < 0){
        return -kk;
    }
    return kk;
}

int main()
{
    for (int i=0; i < 1000; i++){
        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long res = 0;
    for (int i=0; i < a.size(); i++){
        res += abs(a[i] - b[i]);
    }
    cout << res << '\n';
    return 0;
}
