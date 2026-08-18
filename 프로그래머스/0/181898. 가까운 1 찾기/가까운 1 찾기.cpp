#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    // idx부터 시작하여 배열 끝까지 순회
    for (int i = idx; i < arr.size(); i++) {
        if (arr[i] == 1) {
            return i; // 가장 먼저 발견된 1의 인덱스 즉시 반환
        }
    }
    
    // 1을 찾지 못한 경우 -1 반환
    return -1;
}