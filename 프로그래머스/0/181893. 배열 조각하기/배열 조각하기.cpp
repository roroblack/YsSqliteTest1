#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    int start = 0;
    int end = arr.size() - 1;
    
    for (int i = 0; i < query.size(); i++) {
        int q = query[i];
        
        if (i % 2 == 0) {
            // 짝수 쿼리: 현재 구간의 start 기준으로 q번째 인덱스까지로 end 축소
            end = start + q;
        } else {
            // 홀수 쿼리: 현재 구간의 start 기준 q번째 인덱스로 start 확장
            start = start + q;
        }
    }
    
    // 최종 남은 구간 [start, end]만 부분 벡터로 생성하여 반환
    return vector<int>(arr.begin() + start, arr.begin() + end + 1);
}