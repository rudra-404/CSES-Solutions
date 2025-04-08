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
    ll n, q;
    cin >> n >> q;
    vector<ll> preffix_sum(n);
    cin >> preffix_sum[0];
    for (int i = 1; i < n; i++) {
        ll temp;
        cin >> temp;
        preffix_sum[i] = preffix_sum[i-1] + temp;
    }
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << (a == 1 ? preffix_sum[b-1] : preffix_sum[b-1] - preffix_sum[a-2]) << endl;
    }
}

int main() {
    fast;
    solve();
    return 0;
}