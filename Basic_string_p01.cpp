#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // takes input including spaces

    cout << "The size of the string is: " << str.size() << endl;

    return 0;
}
