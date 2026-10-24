#include <string>
#include <vector>
#include <sstream>
#include <algorithm> // sort 함수 사용

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    stringstream ss(myString);
    string temp;
    
    // 'x'를 구분자로 문자를 자름
    while (getline(ss, temp, 'x')) {
        // 빈 문자열이 아닌 경우에만 추가
        if (!temp.empty()) {
            answer.push_back(temp);
        }
    }
    
    // 사전순 정렬
    sort(answer.begin(), answer.end());
    
    return answer;
}