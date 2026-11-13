#include <vector>
#include <numeric> // accumulate 사용

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    // 1. 배열 길이 비교
    if (arr1.size() != arr2.size()) {
        return arr1.size() > arr2.size() ? 1 : -1;
    }
    
    // 2. 길이가 같을 경우 원소의 합 비교
    int sum1 = accumulate(arr1.begin(), arr1.end(), 0);
    int sum2 = accumulate(arr2.begin(), arr2.end(), 0);
    
    if (sum1 != sum2) {
        return sum1 > sum2 ? 1 : -1;
    }
    
    return 0;
}