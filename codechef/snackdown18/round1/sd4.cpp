#include <iostream>
#include <vector>

using namespace std;

void days(vector<int> &A, int i, int by){
    for(int j=i; j<i+3; j++){
        A[j]= A[j]+(j-i+1)*by;
    }
}

void convert(vector<int> &A, vector<int> &B){
    for(int i=0; i<A.size(); i++){
        if(i==A.size()-1){
            if(A[i]==B[i]){
                cout << "TAK" << endl;
                return;
            }
            else{
                cout << "NIE" << endl;
                return;
            }
        }
        if(i==A.size()-2){
            if(A[i]==B[i] && A[i+1]==B[i+1]){
                cout << "TAK" << endl;
                return;
            }
            else{
                cout << "NIE" << endl;
                return;
            }
        }
        if(A[i]>B[i]){
            cout << "NIE" << endl;
            return;
        }
        if(A[i]<B[i]){
            days(A, i, B[i]-A[i]);
        }
    }
}

int main()
{
   int itr;
   cin>>itr;
   int A=0;
   int t;
   int n;
   for(int i=0; i<itr; i++){
       vector<int> A;
       vector<int> B;
       cin >> n;
       for(int j=0; j<n; j++){
           cin >> t;
           A.push_back(t);
       }
       for(int j=0; j<n; j++){
           cin >> t;
           B.push_back(t);
       }
       
       convert(A,B);
       A.clear();
       B.clear();
   }
   return 0;
}
