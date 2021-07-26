//Write a program to read two strings and report whether the strings are equal. If not, report which of the two is larger.
#include<iostream>
#include<string>

using namespace std;

int main()
{   
    string concatenated;
    for (string str;cin >> str;concatenated +=str);
    cout << "The contatenated string is: " << concatenated << endl;

    return 0;
}