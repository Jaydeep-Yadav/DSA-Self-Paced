#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    int x=1;
    cout<<(~x)+1;
    x=5;
    cout<<(~x)+1;
    return 0;
}