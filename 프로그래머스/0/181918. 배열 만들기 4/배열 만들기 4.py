def solution(arr):
    stk = []
    
    idx = 0
    stk.append(arr[idx])
    
    idx = 1
    
    # for idx in range(1, len(arr)):
    while idx < len(arr):
        if len(stk) == 0:
            stk.append(arr[idx])
            idx += 1
            
        elif (stk[-1] < arr[idx]):
            stk.append(arr[idx])
            idx += 1
        
        else:
            stk.pop()
            
    return stk