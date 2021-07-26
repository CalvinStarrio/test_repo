//Write a program to read two strings and report whether the strings are equal. If not, report which of the two is larger.
#include<iostream>
#include<string>

using namespace std;

int main()
{   
    string s1,s2;
    while (cin >> s1 >> s2)
    {
        if (s1.size() == s2.size())
            cout << "s1 and s2 are equal!" << endl;
        else
            cout << "The larger string is: " << ((s1.size()>s2.size()) ? s1:s2) << endl;   
    }
    
    return 0;
}