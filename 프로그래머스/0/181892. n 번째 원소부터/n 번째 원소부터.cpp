#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    // num_list.begin() + (n - 1) 부터 end() 까지 생성
    return vector<int>(num_list.begin() + n - 1, num_list.end());
}