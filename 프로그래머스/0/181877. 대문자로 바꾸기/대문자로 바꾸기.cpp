#include <string>

using namespace std;

string solution(string myString) {
    for (int i = 0; i < myString.size(); i++) {
        if ('a' <= myString[i] && myString[i] <= 'z') {
            myString[i] -= 32;
        }
    }

    return myString;
}