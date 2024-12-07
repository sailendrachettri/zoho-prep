#include<iostream>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    int size = 7;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i == j)
                cout << i+1;
            else if(i+j == size-1)
                cout << j+1;
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}