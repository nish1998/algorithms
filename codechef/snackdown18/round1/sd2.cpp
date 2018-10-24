#include <iostream>
#include <vector>

using namespace std;

bool findsemp(int A, vector<int> &semp){
    for(int i=0; i<semp.size(); i++){
        if(A==semp[i]){
            return true;
        }
    }
    return false;
}

void issemp(int n, vector<int> &semp){
        int t=0;
       for(int i=0; i<semp.size(); i++){
        //   cout<< semp[i];
        //   cout << n;
           if(semp[i]<n){
               if(findsemp(n-semp[i],semp)){
                   cout << "YES"<< endl;
                   break;
               }
           }
           t++;
       }
       if(t==semp.size()){
           cout << "NO"<< endl;
       }
       
}

int main()
{
   int itr;
   
   vector<int> A = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
   vector<int> semp;
   for(int i=0; i<A.size(); i++){
       for(int j=i+1; j<A.size(); j++){
           if(A[i]*A[j]<=200){
               semp.push_back(A[i]*A[j]);
           }
       }
   }
       
   cin>>itr;
   for(int i=0; i<itr; i++){
       int temp;
       cin>> temp;
       issemp(temp, semp);
   }
   return 0;
}
