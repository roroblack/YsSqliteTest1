#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    
    // 지울 인덱스를 표시할 bool 배열 생성 (기본값 false)
    vector<bool> is_removed(my_string.size(), false);
    
    // 지워야 하는 인덱스는 true로 변경
    for (int idx : indices) {
        is_removed[idx] = true;
    }
    
    // false인 인덱스의 글자만 answer에 추가
    for (int i = 0; i < my_string.size(); i++) {
        if (!is_removed[i]) {
            answer += my_string[i];
        }
    }
    
    return answer;
}