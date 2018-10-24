#include <iostream> 
#include <cmath>  
#include <vector>  

using namespace std; 

vector<int> tobit(int A){
    vector<int> res;
    while(A>0){
        if(A%2==0){
            res.push_back(0);
        }
        else{
            res.push_back(1);
        }
        A=A/2;
    }
    return res;
}

void getreply(){
    int A;
    int B;
    int C;
    cin>> A>> B>> C;
    vector<int> as=tobit(A);
    vector<int> bs=tobit(B);
    //vector<int> cs=tobit(C);
    
    int n=as.size();
    int m=bs.size();
    int big=n;
    if(n>m){
        for(int i=0; i<n-m; i++){
            bs.push_back(0);
        }
    }
    if(n<m){
        for(int i=0; i<m-n; i++){
            as.push_back(0);
        }
        big=m;
    }
    //cout<< as.size()<<" ";
    int mul=1;
    int z=0;
    int ans=0;
    for(int i=0; i<big; i++){
        
        if(as[i]!=bs[i]){
            //cout<< as.size()<<" ";
            mul=mul*2;
            z++;
            
        }
    }
    if(z==0){
        cout<< 1<<endl;
        return;
    }
    if(z%2==1){
        ans= mul-pow(2,(z+1)/2);
    }
    if(z%2==0){
        ans= mul-pow(2,(z)/2);
    }
    cout<< ans<<endl;
    return;
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

