#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    
    int res = 0;
    int tmp = a;
    int i;
    bool flag;

    for (i = 0; i < included.size(); i++)
    {
        flag = included[i];
        
        if (flag == true)
            res += tmp;
        tmp += d;
    }
    answer = res;
    
    return answer;
}