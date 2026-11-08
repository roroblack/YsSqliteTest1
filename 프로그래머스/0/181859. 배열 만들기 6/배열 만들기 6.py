def solution(arr):
    stk = []
    
    for val in arr:
        if not stk:
            stk.append(val)
        elif stk[-1] == val:
            stk.pop()
        else:
            stk.append(val)
            
    return stk if stk else [-1]