#include <vector>
#include <string>

using namespace std;

// 0과 5로만 이루어진 숫자인지 검사하는 함수 (질문자님의 3번 아이디어)
bool check(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 5) return false;
        num /= 10;
    }
    return true;
}

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    // 5의 배수만 조사하면 검사 횟수를 5분의 1로 줄일 수 있는 팩트!
    // l 이상인 가장 작은 5의 배수부터 시작합니다.
    int start = (l % 5 == 0) ? l : l + (5 - (l % 5));
    
    for (int i = start; i <= r; i += 5) {
        if (check(i)) {
            answer.push_back(i);
        }
    }
    
    if (answer.empty()) {
        answer.push_back(-1);
    }
    
    return answer;
}