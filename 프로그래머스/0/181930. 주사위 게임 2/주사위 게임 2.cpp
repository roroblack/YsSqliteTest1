#include <string>
#include <vector>

using namespace std;

int one_two(int a, int b, int c)
{
    return (a + b + c) * (a*a + b*b + c*c);
}

int solution(int a, int b, int c) {
    int answer = 0;
    
    if (a != b && b != c && c != a)
        answer = a + b + c;
    
    else if (a == b && (b != c || c != a) )
    {
        answer = one_two(a, b, c);
    }
    else if (b == c && (a != b || c != a) )
    {
        answer = one_two(a, b, c);
    }
    else if (c == a && (b != c || a != b) )
    {
        answer = one_two(a, b, c);
    }
    else if (a == b && b == c && c == a)
        answer = (a + b + c) * (a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c);
        
    return answer;
}