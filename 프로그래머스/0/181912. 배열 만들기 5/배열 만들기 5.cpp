#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for (int idx = 0; idx < intStrs.size(); idx++) {
        int parsed_num = 0;
        
        // s부터 s + l - 1 까지 (길이 l 만큼) 앞에서부터 읽기
        for (int j = s; j < s + l; j++) {
            // 기존 값에 10을 곱하고 새 자릿수를 더함 (아스키 '0' 차감)
            parsed_num = parsed_num * 10 + (intStrs[idx][j] - '0');
        }
        
        // 완결된 정수 하나를 k와 비교하여 push
        if (parsed_num > k) {
            answer.push_back(parsed_num);
        }
    }
    
    return answer;
}