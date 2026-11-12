def solution(arr):
    target_len = 1
    n = len(arr)
    
    # arr의 길이 이상이 되는 가장 작은 2의 거듭제곱 계산
    while target_len < n:
        target_len *= 2
        
    # 부족한 개수만큼 0을 덧붙임
    return arr + [0] * (target_len - n)