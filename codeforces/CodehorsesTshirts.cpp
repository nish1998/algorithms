//http://codeforces.com/contest/1000/problem/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> umap;
    string a;
    for(int i=0; i<n;i++){
        cin >> a;
        if(umap.find(a)==umap.end()){
            umap[a]==0;
        }
        umap[a]++;
    }
    int ans=0;
    for(int i=0; i<n;i++){
        cin >> a;
        if(umap.find(a)!=umap.end() && umap[a]>0){
            umap[a]--;
            ans++;
        }
    }
    cout << n-ans;
    return 0;
}
