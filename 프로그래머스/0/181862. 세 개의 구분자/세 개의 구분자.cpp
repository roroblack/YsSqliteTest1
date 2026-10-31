#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp = "";
    
    for (char c : myStr) {
        // 'a', 'b', 'c'를 구분자로 처리
        if (c == 'a' || c == 'b' || c == 'c') {
            if (!temp.empty()) {
                answer.push_back(temp);
                temp = "";
            }
        } else {
            temp += c;
        }
    }
    
    // 마지막에 남은 문자열 처리
    if (!temp.empty()) {
        answer.push_back(temp);
    }
    
    // 결과 배열이 비어있는 경우 ["EMPTY"] 반환
    if (answer.empty()) {
        answer.push_back("EMPTY");
    }
    
    return answer;
}