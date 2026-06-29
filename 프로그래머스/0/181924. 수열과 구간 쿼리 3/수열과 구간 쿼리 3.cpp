#include <string>
#include <vector>

using namespace std;

void swap2(int & a, int & b) {
    int tmp = 0;
    tmp = a;
    a = b;
    b = tmp;
}

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (int q = 0; q < queries.size(); q++) {
        int i = queries[q][0]; // 쿼리의 첫 번째 원소 (인덱스 i)
        int j = queries[q][1]; // 쿼리의 두 번째 원소 (인덱스 j)
        
        // 2. arr[i]와 arr[j]의 값을 서로 바꿈
        swap2(arr[i], arr[j]);
    }
    answer = arr;
    return answer;
}