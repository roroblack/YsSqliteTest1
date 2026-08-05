#include <string>
#include <vector>

#include <algorithm> // reverse 함수 사용

using namespace std;

string solution(string my_string, int s, int e) {
    // s 인덱스부터 e 인덱스까지 (e + 1 지점 직전까지) 구간 뒤집기
    reverse(my_string.begin() + s, my_string.begin() + e + 1);
    
    return my_string;
}