// Write a program to read the standard input a line at a time. Modify your program to read a word at a time.
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string word;
    while(cin >> word)
        cout << word << endl;
    return 0;
}