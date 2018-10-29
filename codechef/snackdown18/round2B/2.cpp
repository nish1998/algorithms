#include <iostream>
using namespace std;

void reply(){
    int k;
    int n;
    cin>> n;
    cin>> k;
    int t;
    int sum=0;
    for(int i=0; i<n; i++){
        cin >>t;
        if(t>1){
            sum++;
        }
    }
    if(sum<=k){
        cout<< "YES"<<endl;
    }
    else{
        cout << "NO"<<endl;
    }
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
