// https://www.codechef.com/OCT18B/problems/CHSERVE

#include <iostream>
#include <vector>


using namespace std;

int main()
{
   int n;
   cin >> n;
   
   vector<string> A;
   
   for(int i=0; i<n; i++){
       int a,b,c;
       cin >> a;
       cin >> b;
       cin >> c;
       if(((a+b)/c)%2==0){
           A.push_back("CHEF");
       }
       else{
           A.push_back("COOK");
       }
       
   }
   
   for(int i=0; i<n; i++){
       cout << A[i]<<endl;
   }
   
   return 0;
}
