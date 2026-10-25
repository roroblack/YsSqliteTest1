#include <string>
#include <vector>
#include <sstream>

using namespace std;

long long solution(string binomial) {
    stringstream ss(binomial);
    long long a, b;
    char op;
    
    ss >> a >> op >> b;
    
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    
    return 0;
}