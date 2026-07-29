#include <string>
#include <vector>
#include <algorithm> // std::sort 사용

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    // i번째 인덱스부터 끝까지 잘라내어 vector에 추가
    for (int i = 0; i < my_string.size(); i++) {
        answer.push_back(my_string.substr(i));
    }
    
    // 사전순(오름차순) 정렬
    sort(answer.begin(), answer.end());
    
    return answer;
}