#include <iostream>
#include <vector>

using namespace std;

void getreply(){
    int n;
    cin>> n;
    int cross=0;
    vector<int> temp;
    int t;
    for(int i=0; i<n; i++){
        cin>>t;
        temp.push_back(t);
    }
    for(int i=0; i<n-1; i++){
        if(temp[i]>temp[i+1]){
            cross+=1;
        }
        if(cross>1){
            cout<< "NO"<< endl;
            return;
        }
    }

    if(cross==1){
        if(temp[n-1]<=temp[0]){
            cout << "YES"<< endl;
            return;
        }
        else{
            cout << "NO"<< endl;
            return;
        }
        
    }
    cout << "YES"<< endl;
    return;
}

int main()
{
   int go;
   cin>> go;
   for(int l=0; l<go; l++){
       getreply();
   }
   return 0;
}
