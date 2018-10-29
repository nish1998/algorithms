#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h> 
using namespace std;

void reply(){
    int n;
    int m;
    int l;
    int k;
    cin >> n>> m>> k>> l;
    vector<int> times;
    int temp;
    
    for(int i=0; i<n; i++){
        cin>> temp;
        times.push_back(temp);
    }
    sort(times.begin(), times.end());
    
    int min= INT_MAX;
    int timeis=0;
    for(int i=0; i<n; i++){
        timeis=times[i];
        temp= (m+i-timeis/l)*l -timeis%l+l;
        if(temp<min){
            min=temp;
        }
    }
    int atk=(m+n-k/l)*l-k%l+l;
    if(atk<min){
        min=atk;
    }
    cout<<min<<endl;
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
