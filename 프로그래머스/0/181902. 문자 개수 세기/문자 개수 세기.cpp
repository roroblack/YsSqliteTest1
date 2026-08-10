#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    // 크기가 52이고 0으로 초기화된 vector 생성
    vector<int> answer(52, 0);
    
    for (char ch : my_string) {
        if (ch >= 'A' && ch <= 'Z') {
            answer[ch - 'A']++;
        } else if (ch >= 'a' && ch <= 'z') {
            answer[ch - 'a' + 26]++;
        }
    }
    
    return answer;
}