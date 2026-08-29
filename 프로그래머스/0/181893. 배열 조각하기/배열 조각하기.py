def solution(arr, query):
    for i, q in enumerate(query):
        # 짝수 인덱스 쿼리: 뒷부분 버림 (0번부터 q번 인덱스까지 남김)
        if i % 2 == 0:
            arr = arr[: q + 1]
        # 홀수 인덱스 쿼리: 앞부분 버림 (q번 인덱스부터 끝까지 남김)
        else:
            arr = arr[q :]
            
    return arr