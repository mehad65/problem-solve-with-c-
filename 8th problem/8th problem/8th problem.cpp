#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
    string input;
    cin >> input;
    int first=input.find_first_of('A');
    int last = input.find_last_of('Z');
    int result = last - first + 1;
    cout << result;
    return 0;
}

