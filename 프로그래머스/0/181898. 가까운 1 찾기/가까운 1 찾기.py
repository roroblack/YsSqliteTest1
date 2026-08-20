def solution(arr, idx):
    # idx부터 arr의 끝까지 탐색
    for i in range(idx, len(arr)):
        if arr[i] == 1:
            return i  # 가장 먼저 발견된 1의 인덱스 즉시 반환
            
    # 조건에 맞는 인덱스가 없으면 -1 반환
    return -1