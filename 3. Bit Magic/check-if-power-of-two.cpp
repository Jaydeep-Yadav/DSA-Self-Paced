#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPow2(int n){
    if(n==0) return false;
    return ((n&(n-1))==0);
    //? One line return ((n!=0)&&((n&(n-1))==0));
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
    cout<<isPow2(n);
    return 0;
}