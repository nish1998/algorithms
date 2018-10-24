
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int itr;
    cin >> itr;
    for(int i=0; i<itr; i++){
        int n,K,val;
        cin >> n;
        cin >> K;
        vector<int> temp;
        for(int j=0; j<n; j++){
            cin >> val;
            temp.push_back(val);
        }
        sort(temp.begin(),temp.end());
        
        int len=temp.size();
        int u=1;
        for(int k=0; k<len-1; k++){
            
            if(temp[len-k-1]>temp[len-k-2]){
                if(u>=K){
                    break;
                }
            }
            u++;
        }
        cout<< u <<endl;
        
    }

    return 0;
}

