def solution(myString):
    answer = ""

    for ch in myString:
        if 'a' <= ch <= 'z':
            answer += chr(ord(ch) - 32)
        else:
            answer += ch

    return answer