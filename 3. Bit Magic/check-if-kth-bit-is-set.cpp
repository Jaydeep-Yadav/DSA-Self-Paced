#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void kthbit(int n,int k){
    if(n&(1<<(k-1)!=0)) cout<<"Yes";
    else cout<<"No";
}

//? alternate
// void kthbit(int n,int k){
//     if(((n>>(k-1))&1)==1) cout<<"Yes";
//     else cout<<"No";
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    int n,k;
    cin>>n>>k;
    kthbit(n,k);
    return 0;
}