def solution(myString, pat):
    answer = 0
    n = len(myString)
    m = len(pat)
    
    for i in range(n - m + 1):
        if myString[i:i+m] == pat:
            answer += 1
            
    return answer