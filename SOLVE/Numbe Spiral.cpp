/* A u t h o r :

╭━━━╮╱╱╱╱╭╮╱╱╱╱╱╭╮╭━╮
┃╭━╮┃╱╱╱╱┃┃╱╱╱╱╱┃┃┃╭╯
┃╰━╯┣╮╭┳━╯┣━┳━━╮┃╰╯╯╭━━┳┳━━┳━━┳━╮
┃╭╮╭┫┃┃┃╭╮┃╭┫╭╮┃┃╭╮┃┃╭╮┣┫━━┫┃━┫╭╯
┃┃┃╰┫╰╯┃╰╯┃┃┃╭╮┃┃┃┃╰┫╭╮┃┣━━┃┃━┫┃
╰╯╰━┻━━┻━━┻╯╰╯╰╯╰╯╰━┻╯╰┻┻━━┻━━┻╯

R u d r a    K a i s e r */

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define ll long long
#define endl '\n'

void solve() {
    ll y, x;
    cin >> y >> x;
    if ((max(y, x)) & 1) {
        if (y >= x) {
            cout << (y - 1) * (y - 1) + x << endl;
        } else {
            cout << x * x - y + 1 << endl;
        }
    } else {
        if (y >= x) {
            cout << y * y - x + 1 << endl;
        } else {
            cout << (x - 1) * (x - 1) + y << endl;
        }
    }
}

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}