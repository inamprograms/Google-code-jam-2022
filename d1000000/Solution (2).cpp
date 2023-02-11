#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int calculate(){
    
    int size;
    cin >> size;
    int dices[size];
    for(int i=0; i<size; i++)
        cin >> dices[i];
    
    
    int n = sizeof(dices) / sizeof(dices[0]);
    sort(dices, dices + n);
    
    int d = 1;
    for(int i = 0; i < n; i++)
    { 
        if(d <= dices[i])
            d += 1;
    }
    d -= 1;
    return d;
}
int main()
{
    int test_cases;
    cin >> test_cases;
    for(int i = 0; i < test_cases; i++)
        cout << "Case #" << (i+1) << ": " << (calculate())<< endl;
}