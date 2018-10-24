#include <iostream>
#include <vector>

using namespace std;

void getreply(){
    int r;
    int c;
    cin>> r;
    cin>> c;
    
    vector<int> row;
    vector<int> col;
    string t;
    for(int i=0; i<r; i++){
        cin>> t;
        for(int j=0; j<c; j++){
           if(t[j]=='1'){
               row.push_back(i);
               col.push_back(j);
           }
        }
    }
    vector<int> res;
    for(int i=0; i<r+c-2; i++){
        res.push_back(0);
    }
    for(int i=0; i<row.size(); i++){
        for(int j=i+1; j<row.size(); j++){
            res[abs(row[j]-row[i])+abs(col[j]-col[i])-1]++;
        }
    }
    for(int i=0; i<r+c-2; i++){
        cout<< res[i]<<" ";
    }
    cout<<endl;
    return;
}
int main()
{
   int go;
   cin>> go;
   for(int i=0; i<go; i++){
       getreply();
   }
   return 0;
}
