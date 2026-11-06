def solution(arr, flag):
    X = []
    
    for val, f in zip(arr, flag):
        if f:
            # val을 (val * 2)번 추가
            X.extend([val] * (val * 2))
        else:
            # 뒤에서부터 val개만큼 제거
            X = X[:-val]
            
    return X