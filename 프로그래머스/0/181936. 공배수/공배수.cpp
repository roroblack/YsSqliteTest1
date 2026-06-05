#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int res;
    while(b != 0)
    {
        res = a % b;
        a = b;
        b = res;
    }
    return a;
}

int solution(int number, int n, int m) {
    int answer = 0;
    
    if ( number % n == 0 && number % m == 0)
        answer = 1;
    
    return answer;
}
