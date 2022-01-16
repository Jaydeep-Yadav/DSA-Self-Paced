#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//? Calculate square of a number without using *, / and pow()

int square(int n){
    if(n<0) n=-n;

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=n;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    cout<<square(5);   
    return 0;
}