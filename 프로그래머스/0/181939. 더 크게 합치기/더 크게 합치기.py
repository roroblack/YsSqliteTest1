
def solution(a, b):
    answer = 0
    a2 = str(a)
    b2 = str(b)
    res1 = int(a2 + b2)
    res2 = int(b2 + a2)
    if res1 > res2 :
        answer = res1
    else:
        answer = res2
    
    return answer