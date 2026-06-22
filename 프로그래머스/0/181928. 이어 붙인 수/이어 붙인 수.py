def solution(num_list):
    answer = 0
    
    odd = 0
    even = 0
    
    for num in num_list:
        if num % 2 == 1 :
            odd = odd * 10 + num
        else :
            even = even * 10 + num
        
    answer = odd + even
    return answer