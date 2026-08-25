#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int start = -1;
    int end = -1;
    
    // 1. 앞에서부터 처음 나오는 2의 인덱스 찾기
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 2) {
            start = i;
            break;
        }
    }
    
    // 2가 존재하지 않으면 [-1] 반환
    if (start == -1) {
        return {-1};
    }
    
    // 2. 뒤에서부터 처음 나오는 2의 인덱스(마지막 2) 찾기
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] == 2) {
            end = i;
            break;
        }
    }
    
    // 3. start부터 end까지의 구간 추출 (닫힌 구간 [start, end])
    vector<int> answer;
    for (int i = start; i <= end; i++) {
        answer.push_back(arr[i]);
    }
    
    return answer;
}