#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;

    for (int i = 0; i < str_list.size(); i++) {
        // 'l'이 먼저 나온 경우 -> 0부터 i 직전까지 다 집어넣고 끝
        if (str_list[i] == "l") {
            for (int k = 0; k < i; k++) {
                answer.push_back(str_list[k]);
            }
            return answer;
        }
        // 'r'이 먼저 나온 경우 -> i 다음부터 끝까지 다 집어넣고 끝
        else if (str_list[i] == "r") {
            for (int k = i + 1; k < str_list.size(); k++) {
                answer.push_back(str_list[k]);
            }
            return answer;
        }
    }

    // l이나 r이 둘 다 없으면 빈 벡터 리턴
    return answer;
}