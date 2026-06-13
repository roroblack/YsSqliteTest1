#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    string ret;
    
    bool mode = 0;

    
    
    int idx = 0;
    while (idx < code.size())
    {
        if (code[idx] == '1')
        {
            mode = !mode;
            idx++;
            continue;
        }
        
        if (mode == 0 && idx % 2 == 0)
        {
            ret += code[idx];
        }
        else if (mode == 1 && idx % 2 == 1)
        {
            ret += code[idx];
        }
        
        idx++;
    }
    if (ret[0] == '\0')
        return "EMPTY";
    answer = ret;
    return answer;
}