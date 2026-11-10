def solution(arr, k):
    answer = []
    seen = set()
    
    for num in arr:
        if num not in seen:
            seen.add(num)
            answer.append(num)
            if len(answer) == k:
                break
                
    # k개보다 작으면 남은 자리를 -1로 채움
    while len(answer) < k:
        answer.append(-1)
        
    return answer