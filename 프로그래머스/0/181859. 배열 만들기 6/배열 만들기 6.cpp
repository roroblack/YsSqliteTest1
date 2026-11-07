#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    
    for (size_t i = 0; i < arr.size(); i++) {
        if (stk.empty()) {
            stk.push_back(arr[i]);
        } else if (stk.back() == arr[i]) {
            stk.pop_back();
        } else {
            stk.push_back(arr[i]);
        }
    }
    
    // 최종 stk이 비어있으면 [-1] 반환
    if (stk.empty()) {
        return {-1};
    }
    
    return stk;
}