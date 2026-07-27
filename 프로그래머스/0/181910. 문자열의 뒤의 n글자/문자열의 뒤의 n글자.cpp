#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    for (int idx = my_string.size() - n; idx < my_string.size(); idx++)
        answer.push_back(my_string[idx]);
    return answer;
}