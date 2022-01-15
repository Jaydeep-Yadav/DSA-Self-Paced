#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//? Naive soln
// void countbits(int n){
//     int count=0;
//     while(n>0){
//         if((n&1)==1) count++; //if(n%2!=0) count++;
//         n=n>>1; //n=n/2;
//     }
//     cout<<count;
// }

//? Simplify
// void countbits(int n){
//     int count=0;
//     while(n>0){
//         count = count + (n&1);
//         n=n>>2;
//     }
//     cout<<count;
// }

//? Brian Kerningham soln
void countbits(int n){
    int count=0;
    while(n>0){
       n=n &(n-1);
       count++;
    }
    cout<<count;
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
    countbits(n);
    return 0;
}