#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string val = "PROGRAM";
    string val_rev = val;
    reverse(val_rev.begin(), val_rev.end());
    int n = val.size();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j)
                cout << val[i];
            else if(i+j == n-1)
                cout << val_rev[i];
            else    
                cout << " ";
        }
        cout << endl;
    }

    return 0; 
}