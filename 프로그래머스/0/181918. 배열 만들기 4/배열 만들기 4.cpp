#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    
    int idx = 0;
    stk.push_back(arr[idx]);
    
    idx = 1;
    
    while (idx < arr.size()) {
        int len = stk.size();
        if (len == 0) {
            stk.push_back(arr[idx]);
            idx += 1;
        }
        else if (stk[len-1] < arr[idx]) {
            stk.push_back(arr[idx]);
            idx += 1;
        }
        
        else
            stk.pop_back();
    }
    return stk;
}