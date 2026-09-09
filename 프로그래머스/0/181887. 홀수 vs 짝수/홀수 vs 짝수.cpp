#include <vector>
#include <algorithm> // max 함수 사용

using namespace std;

int solution(vector<int> num_list) {
    int odd_sum = 0;  // 홀수 번째 원소 합 (인덱스 0, 2, 4...)
    int even_sum = 0; // 짝수 번째 원소 합 (인덱스 1, 3, 5...)
    
    for (int i = 0; i < num_list.size(); i++) {
        if (i % 2 == 0) {
            odd_sum += num_list[i];
        } else {
            even_sum += num_list[i];
        }
    }
    
    return max(odd_sum, even_sum);
}