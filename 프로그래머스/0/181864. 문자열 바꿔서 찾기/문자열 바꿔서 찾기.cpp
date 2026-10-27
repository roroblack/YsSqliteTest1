#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    string converted = "";
    
    // A -> B, B -> A 변환
    for (char c : myString) {
        if (c == 'A') {
            converted += 'B';
        } else if (c == 'B') {
            converted += 'A';
        }
    }
    
    // pat 포함 여부 확인
    if (converted.find(pat) != string::npos) {
        return 1;
    }
    
    return 0;
}