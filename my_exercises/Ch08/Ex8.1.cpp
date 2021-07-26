/*
Write a function that takes and returns an istream&.
The function should read the stream until it hits end-of-file. 
The function should print what it reads to the standard output. 
Reset the stream so that it is valid before returning the stream.
*/
#include <iostream>
using namespace std;

istream& func(istream& is){
    string buf;
    while(is >> buf)
        cout << buf << endl;
        return is;
    is.clear();
}

int main(){
    func(cin);
    char c;
    cin >> c;
    cout << c;
    return 0;
}