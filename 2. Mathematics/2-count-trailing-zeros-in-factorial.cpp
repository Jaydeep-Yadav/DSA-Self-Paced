#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//? efficient method is counting numbers of 5 in the number
//? trailing zeros = floor(n/5) + floor(n/25) + floor (n/125)......

int count_trailing_zero(int n){
    int res = 0;
    for(int i=5;i<=n;i=i*5){
        res = res + floor(n/i);
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif

    int n;
    cin>>n;
    cout<<count_trailing_zero(n);

    return 0;
}