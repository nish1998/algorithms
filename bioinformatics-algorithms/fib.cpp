// Rabbits and Recurrence Relations

// http://rosalind.info/problems/fib/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


long long int calpairs(int n,int k){

    vector<long long int> store;
    for(int i=0; i<n; i++){
        if(i==0 || i==1){
            store.push_back(1);
        }
        else{
            store.push_back(store[i-1]+k*store[i-2]);
        }
    }
    return store[n-1];
}

int main()
{
    int n=33;
    int k=3;
    cout << calpairs(n,k);
    return 0;
}
