#include <iostream>
using namespace std;

int main(){
    cout << "char: " << sizeof(char) << " bytes\n";
    cout << 5 / 3 << "\n";
    string myString = "abcd";
    cout << myString << "\n";

    string s = "ABC";
    char c = 'd';
    string long_string = s + c;
    cout << long_string << "\n";
    cout << long_string.size() << "\n";
    return 0;
}
