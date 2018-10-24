#include <iostream> 
#include <algorithm>  
#include <vector>  

using namespace std; 

bool check(vector<int> &list){
    int n= list.size();
    for(int i=0; i<n; i++){
        int track=0;
        for(int j=0; j<n; j++){
            if(__gcd(list[i],list[j])==1){
                track=1;
                break;
            }
        }
        if(track==0){
            return false;
        }
    }
    return true;
}

void getreply(){
    vector<int> pr={29,31,37,41,43,47};
    int t;
    int n;
    cin>> n;
    vector<int> list;
    for(int i=0; i<n; i++){
        cin>> t;
        list.push_back(t);
    }
    if(list.size()==1){
        cout<<0<<endl;
        
        cout<< list[0]<<" ";
        cout <<endl;
        return;
    }
    if(check(list)){
        cout<<0<<endl;
        for(int i=0; i<n; i++){
            cout<< list[i]<<" ";
        }
        cout <<endl;
        return;
    }
    if(!check(list)){
        cout<<1<<endl;
        int issame=1;
        for(int i=0; i<n; i++){
            if(list[i]!=29){
                issame=0;
                break;
            }
        }
        if(issame==1){
            list[0]=31;
        }
        if(issame==0){
            list[0]=29;
        }
        for(int i=0; i<n; i++){
            cout<< list[i]<<" ";
        }
        cout <<endl;
        return;
    }
}

int main()
{
   int itr;
   cin>> itr;
   for(int l=0; l<itr; l++){
       getreply();
   }
   return 0;
}

