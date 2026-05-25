#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = my_string;
    for (int idx = 0; idx < overwrite_string.size(); idx++)
    {
        // if (idx >= s && idx <= overwrite_string.size())
            answer[s+idx] = overwrite_string[idx];
        // else
            // answer[idx] = my_string[idx];
    }
    return answer;
}