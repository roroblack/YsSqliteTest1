#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    int len = num_list.size();
    int last = num_list[len - 1];      // 파이썬의 num_list[-1]과 동일
    int prev = num_list[len - 2];      // 파이썬의 num_list[-2]과 동일
    
    if (last > prev) {
        num_list.push_back(last - prev);
    } 
    else {
        num_list.push_back(last * 2);
    }
    
    return num_list;
}