def solution(intStrs, k, s, l):
    answer = []
    
    for st in intStrs:
        # 1. s번 인덱스부터 길이 l만큼 잘라내서 정수로 변환
        num = int(st[s : s + l])
        
        # 2. 변환한 값이 k보다 큰 경우에만 결과 배열에 추가
        if num > k:
            answer.append(num)
            
    return answer