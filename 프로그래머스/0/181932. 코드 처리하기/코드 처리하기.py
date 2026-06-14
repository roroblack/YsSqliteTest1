def solution(code):
    answer = ''
    
    ret = ''
    
    mode = False

    
    
    idx = 0
    while idx < len(code):
    
        if code[idx] == '1':
            mode = not mode
            idx+= 1
            continue
        
        
        if mode == 0 and idx % 2 == 0:
            ret += code[idx]
        
        elif mode == 1 and idx % 2 == 1:
            ret += code[idx]
        
        idx+=1
    
    if not ret: 
        return "EMPTY"
    
    answer = ret
    
    
    return answer