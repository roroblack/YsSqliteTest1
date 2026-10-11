#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    // 뒤에서부터 pat가 나타나는 시작 인덱스 찾기
    int idx = myString.rfind(pat);
    
    // 0번부터 (idx + pat의 길이)까지 자르기
    return myString.substr(0, idx + pat.length());
}