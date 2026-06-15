def solution(a, d, included):
    answer = 0
    res = 0
    tmp = a
    
    for flag in included:
        if flag == True:
            res += tmp
        tmp += d
    
    answer = res
    return answer