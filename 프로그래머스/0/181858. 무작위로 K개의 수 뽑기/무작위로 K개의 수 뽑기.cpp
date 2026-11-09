#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    unordered_set<int> seen;
    
    for (int num : arr) {
        // 이미 등장한 적이 없으면 추가
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            answer.push_back(num);
            
            // k개 채워지면 탐색 종료
            if (answer.size() == static_cast<size_t>(k)) {
                break;
            }
        }
    }
    
    // 길이가 k보다 작으면 남은 자리를 -1로 채움
    while (answer.size() < static_cast<size_t>(k)) {
        answer.push_back(-1);
    }
    
    return answer;
}