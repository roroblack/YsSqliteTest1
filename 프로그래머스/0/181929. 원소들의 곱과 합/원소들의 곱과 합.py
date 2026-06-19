def solution(num_list):
    answer = 0
    
    tmp1 = 1
    tmp2 = 0
    
    for num in num_list:
        tmp1 *= num
    
    for num in num_list:
        tmp2 += num
        
    tmp2 *= tmp2
    
    if tmp1 < tmp2:
        answer = 1
    else :
        answer = 0
        
    return answer