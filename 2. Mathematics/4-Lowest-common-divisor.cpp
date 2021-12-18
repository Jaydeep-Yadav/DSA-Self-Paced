#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//? Starting with maximum, increment the number till it is divisible by both the number

int lcm(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0) break;        
        res++;
    }
    return res;
}


int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}

//? Based on GCD
int lcm_optimized(int a, int b)
{
    return (a*b)/gcd(a,b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
    return 0;
}