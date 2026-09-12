#include <string>
#include <vector>

using namespace std;


vector<string> solution(vector<string> todo_list, vector<bool> finished) {
    vector<string> answer;
    
    for (int i = 0; i < todo_list.size(); i++) {
        // 거짓(false)인 경우 = 아직 마치지 않은 일
        if (!finished[i]) {
            answer.push_back(todo_list[i]);
        }
    }
    
    return answer;
}