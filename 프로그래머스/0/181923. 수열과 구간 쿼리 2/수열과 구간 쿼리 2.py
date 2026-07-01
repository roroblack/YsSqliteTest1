def solution(arr, queries):
    answer = []
    
    for s, e, k in queries:
        temp_candidates = []
        
        for i in range(s, e + 1):
            if arr[i] > k:
                temp_candidates.append(arr[i])
        
        if temp_candidates:
            answer.append(min(temp_candidates))
        else:
            answer.append(-1)
            
    return answer