#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    int s;
    int e;
    
    for (int i = 0; i < queries.size(); i++) {
        s = queries[i][0];
        e = queries[i][1];
        
        for (int j = s; j <= (s + e) / 2; j++) {
            char tmp = my_string[j];
            my_string[j] = my_string[s + e - j];
            my_string[s + e - j] = tmp;
        }
    }
    
    answer = my_string;
    return answer;
}