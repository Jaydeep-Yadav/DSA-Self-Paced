#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//? Starting with minimum, decrement the number till it divides both the number

int gcd(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0) break;
        
        res--;
    }
    return res;
}


//? euclidean solution

int gcd_euclidean(int a,int b){
    while(a!=b){
        if(a>b) a= a-b;
        else b=b-a;
    }
    return a; //? 'a' and 'b' have same value
}


//? euclidean solution optimized

int gcd_euclidean_optimized(int a,int b){
    if(b==0) return a;
    else return gcd_euclidean_optimized(b,a%b);

    //? first call will arrange the value so that b>a;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a,b;
    cin>>a>>b;
    cout<<gcd_euclidean(a,b);
    return 0;
}