#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void oddAppering(int arr[],int n){
    int XOR=0, res1=0, res2=0;
    for(int i=0;i<n;i++) XOR=XOR^arr[i];
    int setbit= XOR & ~(XOR-1); //rightmost set bit
    for(int i=0;i<n;i++){
        if((arr[i]&setbit)!=0) res1=res1^arr[i];
        else res2=res2^arr[i];        
    }
    cout<<res1<<" "<<res2;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif

    int arr[] = {3,4,2,2,3,3,5,5,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    oddAppering(arr,10);   
    return 0;
}