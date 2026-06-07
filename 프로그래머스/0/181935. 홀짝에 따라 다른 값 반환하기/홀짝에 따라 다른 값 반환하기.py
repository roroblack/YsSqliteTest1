def solution(n):
    answer = 0
    tmp = n
    
    if n % 2 == 0 :
        while tmp > 0 :
            answer += tmp * tmp
            tmp -= 2
    
    elif  n % 2 == 1 :
        while tmp > 0 :
            answer += tmp
            tmp -= 2
            
    return answer