def solution(arr):
    # arr에서 2가 위치한 모든 인덱스 수집
    indices = [i for i, val in enumerate(arr) if val == 2]
    
    # 2가 하나도 없는 경우
    if not indices:
        return [-1]
    
    # 가장 처음 등장한 2의 위치(min)부터 가장 마지막 2의 위치(max)까지 슬라이싱
    return arr[indices[0] : indices[-1] + 1]