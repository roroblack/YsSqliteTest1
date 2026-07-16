#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    for (int idx = 0; idx < index_list.size(); idx++) {
        int target_idx = index_list[idx];
        answer.push_back( my_string[target_idx]);
    }
    return answer;
}