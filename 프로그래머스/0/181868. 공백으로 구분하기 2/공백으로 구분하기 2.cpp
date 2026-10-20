#include <string>
#include <vector>
#include <sstream> // stringstream 사용을 위해 필요

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    stringstream ss(my_string);
    string word;
    
    // 공백을 기준으로 단어를 하나씩 추출하여 vector에 저장
    while (ss >> word) {
        answer.push_back(word);
    }
    
    return answer;
}