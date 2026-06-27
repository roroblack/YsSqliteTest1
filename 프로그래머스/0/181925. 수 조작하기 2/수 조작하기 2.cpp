#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    
    // 팩트: 인덱스 1부터 시작하여 직전 원소(i-1)와의 차이를 비교합니다.
    for (int i = 1; i < numLog.size(); i++) {
        int diff = numLog[i] - numLog[i - 1]; // 현재 값 - 이전 값
        
        if (diff == 1) {
            answer += "w";
        }
        else if (diff == -1) {
            answer += "s";
        }
        else if (diff == 10) {
            answer += "d";
        }
        else if (diff == -10) {
            answer += "a";
        }
    }
    
    return answer;
    return answer;
}