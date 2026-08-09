def solution(q, r, code):
    # r번 인덱스부터 시작해서 q 간격으로 끝까지 문자들을 뽑아냅니다.
    return code[r::q]