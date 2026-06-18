   
def one_two (a, b, c) :

    return (a + b + c) * (a*a + b*b + c*c)


def solution(a, b, c):
    answer = 0
 
    if a != b and b != c and c != a:
        answer = a + b + c
    
    elif (a == b and (b != c or c != a) ):
        answer = one_two(a, b, c)
    
    elif (b == c and (a != b or c != a) ):
        answer = one_two(a, b, c);
    
    elif (c == a and (b != c or a != b) ):
        answer = one_two(a, b, c)
    
    elif (a == b and b == c and c == a) :
        answer = (a + b + c) * (a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c)
        
    
    return answer
