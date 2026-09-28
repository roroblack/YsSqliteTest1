#include <string>

using namespace std;

int solution(string myString, string pat) {
    if (myString.size() < pat.size()) {
        return 0;
    }

    for (int i = 0; i <= (int)myString.size() - (int)pat.size(); i++) {
        bool same = true;

        for (int j = 0; j < (int)pat.size(); j++) {
            char a = myString[i + j];
            char b = pat[j];

            if ('A' <= a && a <= 'Z') {
                a += 32;
            }

            if ('A' <= b && b <= 'Z') {
                b += 32;
            }

            if (a != b) {
                same = false;
                break;
            }
        }

        if (same) {
            return 1;
        }
    }

    return 0;
}