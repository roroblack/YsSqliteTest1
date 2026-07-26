#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    
    for (int idx = 0; idx < parts.size(); idx++) {
        
        int s = parts[idx][0];
        int e = parts[idx][1];
        
        for (int j = s; j <= e; j++) {
            
            answer.push_back( my_strings[idx][j] );
        }
    }
    return answer;
}