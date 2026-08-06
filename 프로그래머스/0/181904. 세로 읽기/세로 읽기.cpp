#include <string>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    
    // 시작 위치는 c - 1, 간격은 m
    for (int i = c - 1; i < my_string.size(); i += m) {
        answer += my_string[i];
    }
    
    return answer;
}