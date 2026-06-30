def solution(arr, queries):
    answer = []
    
    for idx in range(len(queries)):
        a = queries[idx][0]
        b = queries[idx][1]
        
        tmp = arr[a]
        arr[a] = arr[b]
        arr[b] = tmp
        
    answer = arr;
    return answer