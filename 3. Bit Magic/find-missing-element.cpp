#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findmissing(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res = res+arr[i];
    }

    return ((n+1)*(n+1+1)/2) - res;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    int arr[]= {1,3,4,5};
    int n=4;
    cout<<findmissing(arr,n);
    return 0;
}