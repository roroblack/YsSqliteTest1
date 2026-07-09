#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    int x = n;
    answer.push_back(x);
    while (x != 1) {
        if (x % 2 == 0) {
            x /= 2;
            answer.push_back(x);
        }
        
        else {
            x = 3 * x + 1;
            answer.push_back(x);
        }
    }
    
    return answer;
}