#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int res1 = 0;
    int res2 = 0;
    
//     if ( a > b)
//     {
//         longer = a;
//         smaler = b;
//         answer = a;        
//     }
//     else
//     {
//         longer = b;
//         smaler = a;
//         answer = b;
//     }
        
    for (int i=1;  ; i*=10)
    {
        if (res1 != 0 && res2 != 0)
            break;
        // if (longer % i == 1)
        // {
            // if (l)
            // break;
        // }
        
        if (a < i && res1 == 0)
        {
            res1 = b * i + a;
        }
        if (b < i && res2 == 0)
        {
            res2 = a * i + b;
        }
        
    }
    
    res1 > res2 ? answer = res1 : answer = res2;
    
    return answer;
}