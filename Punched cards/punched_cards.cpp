#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int test_cases, rows, cols;
    string rows_cols,row,col, grid;
    cin >> test_cases;
    getline(cin, rows_cols);
    for(int i = 0; i < test_cases; i++){
        cout << "Case #" + to_string(i+1) + ":" << endl;
        getline(cin, rows_cols);
        istringstream iss(rows_cols);
        iss >> row >> col;
        rows = stoi(row);
        cols = stoi(col);
        for(int r = 0; r < 2*rows+1; r++)
        {
            grid = "";
            if(r == 0){
            
                grid += "..";
                for(int c = 0; c < cols*2-1; c++)
                {
                    if(c%2 == 0){
                        grid += "+";
                    }
                    else{
                        grid += "-";
                    }
                }
                cout << grid << endl;
            }
            else if(r == 1)
            {
                grid += "..";
                for(int c = 0; c < cols*2-1; c++)
                {
                    if(c%2 == 0){
                        grid += "|";
                    }
                    else{
                        grid += ".";
                    }
                }
                cout << grid << endl;
            }
            else if(r%2 == 0)
            {
                for(int c = 0; c < cols*2+1; c++)
                {
                    if(c%2 == 0){
                        grid += "+";
                    }
                    else{
                        grid += "-";
                    }
                }
                cout << grid << endl;
            
            }
            else
            {
                for(int c = 0; c < cols*2+1; c++)
                {
                    if(c%2 == 0){
                        grid += "|";
                    }
                    else{
                        grid += ".";
                    }
                }
                cout << grid << endl;
            }
        }
    }
}