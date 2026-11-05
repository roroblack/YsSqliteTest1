#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> X;
    
    for (size_t i = 0; i < arr.size(); i++) {
        if (flag[i]) {
            // arr[i]를 (arr[i] * 2)번 추가
            int count = arr[i] * 2;
            for (int j = 0; j < count; j++) {
                X.push_back(arr[i]);
            }
        } else {
            // 마지막 arr[i]개의 원소 제거
            for (int j = 0; j < arr[i]; j++) {
                X.pop_back();
            }
        }
    }
    
    return X;
}