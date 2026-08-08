#include <string>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    
    // 시작 인덱스는 r, 간격은 q
    for (int i = r; i < code.size(); i += q) {
        answer += code[i];
    }
    
    return answer;
}