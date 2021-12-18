#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//? Optimized Method

bool isPrime(int n){
    if(n==1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5;i*i<=n;i=i+6){
        if(n%i == 0 || n%(i+2)==0) return false;
        //? checks divisibility with 5 and 7 simultaneously  
    }
    return true;
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
    cout<<isPrime(n);

    return 0;
}