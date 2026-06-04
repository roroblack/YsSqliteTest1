#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    // 파이썬의 int(str(a) + str(b)) 부분을 변환
    int res1 = stoi(to_string(a) + to_string(b));
    int res2 = 2 * a * b;
    
    // 조건문 처리
    if (res1 > res2) {
        answer = res1;
    } else {
        answer = res2;
    }
    
    return answer;
}