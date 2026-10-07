#include <string>
#include <vector>
#include <cctype> // tolower 함수 사용

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for (char c : myString) {
        if (c == 'a' || c == 'A') {
            answer += 'A';
        } else {
            answer += tolower(c);
        }
    }
    
    return answer;
}