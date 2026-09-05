#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    // 0번 인덱스부터 n - 1번 인덱스까지 (n개) 잘라서 반환
    return vector<int>(num_list.begin(), num_list.begin() + n);
}