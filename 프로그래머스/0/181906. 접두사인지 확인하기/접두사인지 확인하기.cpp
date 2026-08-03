#include <string>
#include <vector>

using namespace std;

#include <string>

using namespace std;

int solution(string my_string, string is_prefix) {
    // 팩트: is_prefix가 더 길면 접두사가 될 수 없음 (예제 4번 방어)
    if (is_prefix.size() > my_string.size()) {
        return 0;
    }
    
    // 0번 인덱스부터 is_prefix의 길이만큼 잘라서 비교
    if (my_string.substr(0, is_prefix.size()) == is_prefix) {
        return 1;
    }
    
    return 0;
}