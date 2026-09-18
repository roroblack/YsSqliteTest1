#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (int q = 0; q < queries.size(); q++) {
        int s = queries[q][0];
        int e = queries[q][1];

        for (int i = s; i <= e; i++) {
            arr[i] += 1;
        }
    }

    return arr;
}