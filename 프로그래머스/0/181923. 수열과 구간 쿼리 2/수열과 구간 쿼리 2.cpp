#include <string>
#include <vector>
#include <algorithm> // 팩트: min_element를 사용하기 위해 이 헤더가 필수입니다!

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (int q = 0; q < queries.size(); q++) {
        int s = queries[q][0];
        int e = queries[q][1];
        int k = queries[q][2];
        
        vector<int> temp_candidates; // k보다 큰 값들을 모아둘 임시 벡터
        
        for (int i = s; i <= e; i++) {
            if (arr[i] > k) {
                // 팩트 1: push가 아니라 push_back을 써야 합니다.
                temp_candidates.push_back(arr[i]);
            }
        }
        
        // 팩트 2: 벡터가 비어있지 않은지 검사할 때는 !변수.empty()를 씁니다.
        if (!temp_candidates.empty()) {
            // 팩트 3: C++ 벡터 내부 전체의 최솟값은 *min_element()로 구합니다.
            int min_val = *min_element(temp_candidates.begin(), temp_candidates.end());
            answer.push_back(min_val);
        } else {
            answer.push_back(-1);
        }
    }
    return answer;
}