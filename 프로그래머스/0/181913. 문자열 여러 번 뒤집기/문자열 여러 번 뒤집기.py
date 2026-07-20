def solution(my_string, queries):
    # 1. 문자열은 수정이 안 되므로 리스트로 변환
    arr = list(my_string)
    
    # 2. 쿼리 처리
    for s, e in queries:
        # s부터 e까지(포함)를 슬라이싱하여 뒤집은 뒤 다시 그 위치에 넣음
        arr[s : e + 1] = arr[s : e + 1][::-1]
    
    # 3. 리스트를 다시 문자열로 합쳐서 반환
    return "".join(arr)