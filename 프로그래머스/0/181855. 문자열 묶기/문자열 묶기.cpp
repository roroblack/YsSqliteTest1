#include <string>
#include <vector>
#include <algorithm> // max_element 사용

using namespace std;

int solution(vector<string> strArr) {
    // 문자열 길이는 1 이상 30 이하
    vector<int> counts(31, 0);
    
    for (const string& s : strArr) {
        counts[s.length()]++;
    }
    
    return *max_element(counts.begin(), counts.end());
}