// http://codeforces.com/contest/987/problem/B
#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    
    cin >> x;
    cin >> y;
    
    if(x==y){
        cout << "=";
        return 0;
    }
    
    int m= min(x,y);
    
    if(x==m){
        if(x>=3){
            cout << ">";
        }
        else if(x==2){
            if(y==3){
                cout << "<";
            }
            else if(y==4){
                cout << "=";
            }
            else if(y>4){
                cout << ">";
            }
        }
        else if (x==1){
            cout << "<";
        }
    }
    
    if(y==m){
        if(y>=3){
            cout << "<";
        }
        else if(y==2){
            if(x==3){
                cout << ">";
            }
            else if(x==4){
                cout << "=";
            }
            else if(x>4){
                cout << "<";
            }
        }
        else if (y==1){
            cout << ">";
        }
    }

    return 0;
}
