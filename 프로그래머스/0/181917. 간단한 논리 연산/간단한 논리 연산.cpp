#include <string>
#include <vector>

using namespace std;

bool func_or(bool x1, bool x2) {
    if (x1 == true && x2 == true)
        return true;
    else if ((x1 == true && x2 == false) || (x1 == false && x2 == true))
        return true;
    else if (x1 == false && x2 == false)
        return false;
}


bool func_and(bool x1, bool x2) {
    if (x1 == true && x2 == true)
        return true;
    else if ((x1 == true && x2 == false) || (x1 == false && x2 == true))
        return false;
    else if (x1 == false && x2 == false)
        return false;
}


bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    
    answer = func_and(func_or(x1, x2), func_or(x3, x4));
    
    return answer;
}