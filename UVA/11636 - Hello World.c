#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,cas = 1;
    while(cin >> n && n > 0){
        int hello = 1,cnt = 0;
        while(hello < n){
            hello+=hello;
            cnt++;
        }
        cout << "Case " << cas++ << ": " << cnt << endl;
    }
    return 0;
}
