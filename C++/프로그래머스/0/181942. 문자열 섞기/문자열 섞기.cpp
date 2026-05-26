#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string answer = str1 + str2;
    
    for (int i = 0; i < str1.size() + str2.size(); i++)
    {
            answer[2 * i]       = str1[i];
            answer[2 * i + 1]   = str2[i];           
    }
    return answer;
}