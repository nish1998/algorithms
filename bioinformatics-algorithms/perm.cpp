// Enumerating Gene Orders

// http://rosalind.info/problems/perm/

#include <iostream>
#include <vector>

using namespace std;
         
vector<vector<int>> res;
int n=0;

void perm(vector<int> A, vector<int> temp, int k){
    if(k==n){
        res.push_back(temp);
        return;
    }
    else{
        for(int i=0; i<A.size(); i++){
            int t= A[i];
            temp.push_back(A[i]);
            A.erase(A.begin()+i);
            perm(A, temp, k+1);
            A.insert(A.begin()+i, t);
            temp.erase(temp.begin()+temp.size()-1);
        }
    }
    return;
}

int main()
{
    
    n=6;
    vector<int> temp;
    vector<int> A;
    for(int i=1; i<=n; i++){
        A.push_back(i);
    }
    
    perm(A, temp, 0);
    int m =res.size();
    cout << m<< endl;
    
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << res[i][j]<< " ";
        }
        cout << endl;
    }
    
    return 0;
}
