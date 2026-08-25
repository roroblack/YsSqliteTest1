def solution(arr, intervals):
    a1, b1 = intervals[0]
    a2, b2 = intervals[1]
    
    # a1부터 b1까지 포함한 구간 + a2부터 b2까지 포함한 구간
    return arr[a1 : b1 + 1] + arr[a2 : b2 + 1]