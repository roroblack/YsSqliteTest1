#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int n = myString.length();
    int m = pat.length();
    
    for (int i = 0; i <= n - m; i++) {
        if (myString.substr(i, m) == pat) {
            answer++;
        }
    }
    
    return answer;
}