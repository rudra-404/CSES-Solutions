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
    string s;
    cin >> s;
    int count = 1, maximum = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i - 1] == s[i]) {
            count++;
        } else {
            maximum = max(maximum, count);
            count = 1;
        }
    }
    maximum = max(maximum, count);
    cout << maximum << endl;
}

int main() {
    fast;
    solve();
    return 0;
}