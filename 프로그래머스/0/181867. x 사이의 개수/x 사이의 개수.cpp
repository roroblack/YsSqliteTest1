#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int count = 0;
    
    for (char c : myString) {
        if (c == 'x') {
            answer.push_back(count);
            count = 0;
        } else {
            count++;
        }
    }
    
    // 마지막 'x' 이후의 문자열 길이 추가
    answer.push_back(count);
    
    return answer;
}