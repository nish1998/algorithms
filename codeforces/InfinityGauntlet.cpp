//http://codeforces.com/contest/987/problem/A

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, string> stones;
    stones["purple"]="Power";
    stones["green"]="Time";
    stones["blue"]="Space";
    stones["orange"]="Soul";
    stones["red"]="Reality";
    stones["yellow"]="Mind";
    
    int n;
    cin >> n;
    string temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        if(stones.find(temp)!=stones.end()){
            stones.erase(temp);
        }
    }
    int m= stones.size();
    cout << m<<endl;
    for (map<string,string>::iterator it = stones.begin(); it != stones.end(); ++it) {
        cout << it->second<< endl;
    }

    return 0;
}
