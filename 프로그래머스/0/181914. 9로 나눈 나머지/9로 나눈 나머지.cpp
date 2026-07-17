#include <string>
#include <vector>

using namespace std;

int iPow_n(int n, int x = 10)
{
    int pow_res=1;
    for (int i = 0; i<n; i++) {
        pow_res *= pow_res * x;
    }
    return pow_res;
}

int solution(string number) {
    int answer = 0;
    int iNum = 0;
    char num_zero = 48; // '0' == 48
    
    for (int idx = 0; idx < number.size(); idx++) {
        // iNum += (number[idx] - num_zero) * iPow_n(idx);
        iNum += number[idx] - num_zero;
    }
    answer = iNum % 9;
    return answer;
}