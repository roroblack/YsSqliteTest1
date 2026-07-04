def solution(arr, queries):
    answer = []
    
    for s, e, k in queries:
        for i in range(s, e + 1):
            # 팩트: ZeroDivisionError를 방지하기 위해 k가 0일 때와 아닐 때를 나눕니다.
            if k == 0:
                if i == 0:
                    arr[i] += 1
            else:
                if i % k == 0:
                    arr[i] += 1
    answer = arr
    return answer