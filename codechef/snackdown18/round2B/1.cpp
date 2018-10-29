#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> umap;

void reply(){
    int y;
    cin >>y;
    if(umap.find(y) == umap.end()){
        cout<< "NOT HOSTED"<<endl;
    }
    else{
        cout<< "HOSTED"<<endl;
    }
    return;
}

int main()
{
    umap.clear();
    umap[2010]=1;
    umap[2015]=1;
    umap[2016]=1;
    umap[2017]=1;
    umap[2019]=1;
    int t;
    cin >>t;
    for(int i=0; i<t; i++){
       reply();
    }
    return 0;
}
