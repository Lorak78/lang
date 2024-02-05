#include <iostream>
#include <string>
using namespace std;

int main(){
    string wow_there_is_a_type_for_string = "oa9ewoaaaa";
    string something;
    string other = wow_there_is_a_type_for_string + " ciao a tutti!!!";
    cout << other << "\n";

    cout << wow_there_is_a_type_for_string.length() << endl;
    something += other[0];
    something += other[2];
    cout << something << endl;

    string input;
    getline(cin, input);
    cout << input << endl;

    return 0;
}