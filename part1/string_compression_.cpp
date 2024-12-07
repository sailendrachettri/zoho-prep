#include<iostream>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "b3c6d15";
    int n = str.size();

    for(int i = 0; i < n;){
        char ch = str[i++];
        string num = "";
        int int_num;

        while(str[i] >= '0' && str[i] <= '9'){
            num += str[i++];
        }

        int_num = stoi(num);

        // cout << endl << "num: " << int_num << endl;
        // cout << endl << "ch: " << ch << endl;

        while(int_num--){
            cout << ch;
        }
    }

    return 0;
}