#include <iostream>
#include <unordered_map>

using namespace std;

void gettime(){
    unordered_map<string, double> umap;
    int itr;
    cin >> itr;
    double total=0;
    for(int i=0; i<itr; i++){
       string temp;
       cin>> temp;
       if (umap.find(temp) == umap.end()){
           char t=temp[0];
           double sum=0.2;
           for(int j=1; j<temp.length(); j++){
               if(((temp[j]=='d' || temp[j]=='f') && (t=='d'||t=='f')) || ((temp[j]=='j' || temp[j]=='k') && (t=='j'||t=='k'))){
                   sum+=0.4;
               }
               if(((temp[j]=='d' || temp[j]=='f') && (t=='j'||t=='k')) || ((temp[j]=='j' || temp[j]=='k') && (t=='d'||t=='f'))){
                   sum+=0.2;
               }
               t=temp[j];
           }
           umap[temp]=sum;
           total+=sum;
       }
       else{
           total+= umap[temp]/2;
       }
    }
    cout << total*10<< endl;
    return;
}
int main()
{
   int go;
   cin>> go;
   for(int i=0; i<go; i++){
       gettime();
   }
   return 0;
}
