def solution(my_string, m, c):
    # c - 1 번 인덱스부터 시작해서 m 간격으로 끝까지 문자들을 뽑아냅니다.
    return my_string[c - 1 :: m]