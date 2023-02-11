#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int calculate(){
    
    int size;
    string dices, dice;
    vector<string> dices_vec;
    
    cin >> size;
    int dices_arr[size];
    
    cin.ignore();
    getline(cin, dices);
    istringstream iss(dices);
    while (iss >> dice)
    {
        dices_vec.push_back(dice);
    }
    
    for(int i = 0; i < dices_vec.size(); i++)
    {
        dices_arr[i] = stoi(dices_vec[i]);    
    }
    
    int n = sizeof(dices_arr) / sizeof(dices_arr[0]);
    sort(dices_arr, dices_arr + n);
    
    int max = 0;
    int d = 1;
    for(int i = 0; i < n; i++)
    {
        if(d <= dices_arr[i]){
            max += 1;
            d += 1;
        }
    }
    
    return max;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    for(int i = 0; i < test_cases; i++)
    {
        cout << "Case #" + to_string(i+1) + ": " 
            + to_string(calculate())<< endl;
    }
}