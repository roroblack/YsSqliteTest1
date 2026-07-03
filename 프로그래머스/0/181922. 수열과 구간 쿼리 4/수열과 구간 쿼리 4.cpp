#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (int q = 0; q < queries.size(); q++) {
        int s = queries[q][0];
        int e = queries[q][1];
        int k = queries[q][2];
        
        for (int i = s; i <= e; i++) {
            // 팩트: k가 0인 경우 0으로 나누기 에러가 나므로, k == 0인 상황을 방어합니다.
            // i가 0일 때 0은 모든 수의 배수이므로 i == 0인 경우도 참으로 처리합니다.
            if (k == 0) {
                if (i == 0) arr[i] += 1;
            }
            else {
                if (i % k == 0) {
                    arr[i] += 1;
                }
            }
        }
    }
    
    return answer = arr;
}