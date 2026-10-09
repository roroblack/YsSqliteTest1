#include <string>
#include <vector>
#include <cctype> // toupper 함수 사용

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    
    char target = alp[0]; // 비교할 문자 1개
    
    for (char c : my_string) {
        if (c == target) {
            answer += toupper(c); // 일치하면 대문자로 변환
        } else {
            answer += c;          // 일치하지 않으면 그대로 추가
        }
    }
    
    return answer;
}