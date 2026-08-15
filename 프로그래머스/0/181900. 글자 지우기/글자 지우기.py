def solution(my_string, indices):
    # indices를 set으로 변환하여 조회 속도 최적화 (O(1))
    remove_set = set(indices)
    
    answer = []
    for idx, ch in enumerate(my_string):
        # 지울 인덱스 목록에 포함되어 있지 않은 문자만 남김
        if idx not in remove_set:
            answer.append(ch)
            
    # 리스트의 문자들을 하나의 문자열로 합쳐서 반환
    return "".join(answer)