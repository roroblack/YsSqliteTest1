#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int target_len = 1;
    int n = arr.size();
    
    // arr의 길이 이상이 되는 가장 작은 2의 거듭제곱 계산
    while (target_len < n) {
        target_len *= 2;
    }
    
    // 부족한 개수만큼 0 추가
    while (arr.size() < static_cast<size_t>(target_len)) {
        arr.push_back(0);
    }
    
    return arr;
}