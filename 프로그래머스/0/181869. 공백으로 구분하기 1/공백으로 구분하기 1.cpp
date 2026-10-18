#include <string>
#include <vector>
#include <sstream> // stringstream 사용

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    stringstream ss(my_string);
    string temp;
    
    // 공백 단위로 단어를 읽어와 vector에 추가
    while (ss >> temp) {
        answer.push_back(temp);
    }
    
    return answer;
}