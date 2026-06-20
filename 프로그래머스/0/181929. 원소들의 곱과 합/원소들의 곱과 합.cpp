#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int num_list_len = num_list.size();
    int tmp1 = 1;
    int tmp2 = 0;
    
    // 1. 모든 원소의 곱 계산
    for (size_t i = 0; i < num_list_len; i++) {
        tmp1 *= num_list[i];
    }
    
    // 2. 모든 원소의 합 계산
    for (size_t i = 0; i < num_list_len; i++) {
        tmp2 += num_list[i];
    }
    
    // 3. 합의 제곱 계산
    tmp2 *= tmp2;
    
    // 4. 조건 비교 후 결과 저장
    if (tmp1 < tmp2) {
        answer = 1;
    } else {
        answer = 0;
    }
    
    return answer;
    return answer;
}