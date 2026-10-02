#include <string>
#include <cctype> // tolower 함수 사용

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for (char c : myString) {
        answer += tolower(c);
    }
    
    return answer;
}