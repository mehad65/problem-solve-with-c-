#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
    string input;
    string input2;
    cin >> input;
    int len = input.length();
    for (int i = 0,j=len-1;  i<j; i++,j--)
    {
        if (input[i] != input[j]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}