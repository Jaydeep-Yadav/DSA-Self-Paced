#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//? Given an unsigned integer N. The task is to swap all odd bits with even bits.

unsigned int swapBits(unsigned int n){
    int oddmask = 0x55555555; //010101...
    int evenmask = 0xAAAAAAAA; //101010...
    
    oddmask = n&oddmask;
    evenmask = n&evenmask;
    
    oddmask = oddmask<<1;
    evenmask= evenmask>>1;
    
    int ans= oddmask|evenmask;
    return ans;
}   

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    
    return 0;
}