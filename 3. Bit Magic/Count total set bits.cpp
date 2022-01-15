#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    if(n==0) return 0;
    int x=lg_power_of_2in_range(n);
    int bits_till_2raised_x = x*(1<<(x-1));
    int msb_after_2raised_x_upto_n = n-(1<<x)+1;
    int rest= n-(1<<x);
    int ans = bits_till_2raised_x + msb_after_2raised_x_upto_n + countSetBits(rest);
    return ans;     
}
    
int lg_power_of_2in_range(int n){
    int x=0;
    while((1<<x)<=n) x++;
    return x-1;
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