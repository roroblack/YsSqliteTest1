def func_or( x1,  x2) :
    if (x1 == True and x2 == True):
        return True
    elif ((x1 == True and x2 == False) or (x1 == False and x2 == True)):
        return True
    elif (x1 == False and x2 == False):
        return False



def func_and( x1,  x2) :
    if (x1 == True and x2 == True):
        return True
    elif ((x1 == True and x2 == False) or (x1 == False and x2 == True)):
        return False
    elif (x1 == False and x2 == False):
        return False



def solution(x1, x2, x3, x4):
    answer = True
    
    answer = func_and(func_or(x1, x2), func_or(x3, x4))
    return answer