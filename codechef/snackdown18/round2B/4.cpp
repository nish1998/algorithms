#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void reply(){
    int n;
    int k;
    cin >> n>> k;
    
    int sum=0;
    sum=(k*(1+k))/2;
    //cout<<sum<<endl;
    if(sum>n){
        cout<<-1<< endl;
        return;
    }
    
    int rat=(n-sum)/k;
    
    if(rat==0){
        cout<<0<< endl;
        return;
    }
    
    int mod=(n-sum)%k;
    long long unsigned int ans=1;
    long long unsigned int z;
    long long int y;
    const unsigned int M = 1000000007;
    
    for(int i=1; i<=k; i++){
        if(i>k-mod){
            //z=mulmod((i+rat+1),(i+rat+1),M);
            //ans=mulmod(ans,z-(i+rat+1),M);
            y=pow((i+rat+1),2)-(i+rat+1);
            z=(y)%M;
            ans=(ans*z)%M;
        }
        else{
            //z=mulmod((i+rat),(i+rat),M);
            //ans=mulmod(ans,z-(i+rat),M);
            y=pow((i+rat),2)-(i+rat);
            //cout<<y<<endl;
            z=(y)%M;
            ans=(ans*z)%M;
        }
       //<<(i+rat)<<" "<<y<<" "<< ans<<endl;
    }
    cout<<ans<<endl;
    return;
}

int main()
{
    int t;
    cin >>t;
    for(int i=0; i<t; i++){
       reply();
    }
    return 0;
}
