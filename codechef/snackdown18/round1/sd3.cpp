#include <iostream>
#include <vector>

using namespace std;

void days(int A){
    vector<int> ppl;
    int val;
    for(int i=0; i<A; i++){
        cin>> val;
        ppl.push_back(val);
    }
    int sum=0;
    int loop=0;
    int d=0;
    int n=0;
    int u=1;
    int v=0;
    for(int i=0; i<A; i++){
        v=n;
        for(int j=v; j<v+u; j++){
            sum+=ppl[j];
            n++;
        }
        u=sum;
        d++;
        //cout<< sum << " "<<endl;
        if(sum>=A-n){
            cout << d <<endl;
            break;
        }
    }
}

int main()
{
   int itr;
   cin>>itr;
   int A=0;
   for(int i=0; i<itr; i++){
       cin >> A;
       days(A);
   }
   return 0;
}
