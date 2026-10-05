#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for (int i = 0; i < strArr.size(); i++) {
        string s = "";
        
        if (i % 2 == 0) { // 짝수 인덱스 -> 소문자
            for (char c : strArr[i]) {
                s += tolower(c);
            }
        } else { // 홀수 인덱스 -> 대문자
            for (char c : strArr[i]) {
                s += toupper(c);
            }
        }
        
        answer.push_back(s);
    }
    
    return answer;
}