#include <string>
#include <vector>

using namespace std;

string solution(string nickname) {
    string answer = "";
    for(int i=0; i<nickname.size(); i++){
        if(nickname[i] == 'l'){
            answer += "I";
        }
        else if(nickname[i] == 'w'){
            answer += "vv";
        }
        else if(nickname[i] == 'W'){
            answer += "VV";
        }
        else if(nickname[i] == 'O'){
            answer += "0";
        }
        else{
            answer += nickname[i];
        }
    }
    /*'\0' 이 문자열 마지막에 포함되어 있음을 고려해야 함*/if(answer.size() < 5) for (int i=0; i < 6 - answer.size(); i++) {
        answer += "o";
    }
    if(answer.size() > 8){
        answer = answer.substr(0,8);
    }
    return answer;
}
