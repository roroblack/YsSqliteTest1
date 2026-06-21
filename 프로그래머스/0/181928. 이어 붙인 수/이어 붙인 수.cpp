#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    int odd_sum = 0;  // 홀수를 이어 붙일 변수
    int even_sum = 0; // 짝수를 이어 붙일 변수
    
    // 팩트: vector의 길이는 .size()로 안전하게 제어합니다.
    for (int i = 0; i < num_list.size(); i++) {
        // 1. 홀수인 경우
        if (num_list[i] % 2 == 1) {
            odd_sum = odd_sum * 10 + num_list[i];
        }
        // 2. 짝수인 경우 (% 2 == 0)
        else {
            even_sum = even_sum * 10 + num_list[i];
        }
    }
    
    // 두 수를 더한 결과 반환
    answer = odd_sum + even_sum;

    return answer;
}