#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    // strlen(str)
    for (int i =0; i<str.size(); i++)   
    {
        if (str[i] < 97)        
            printf("%c", str[i] + 32);
        else
            printf("%c", str[i] - 32);
            
    }
    return 0;
}