#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int tmp = n;
    
    if (n % 2 == 0)
        while (tmp > 0)
        {
            answer += tmp * tmp;
            tmp -= 2;
        }

    else if  (n % 2 == 1)
        while (tmp > 0)
        {
            answer += tmp;
            tmp -= 2;
        }   
                
    return answer;
}