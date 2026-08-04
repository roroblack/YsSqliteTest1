def solution(my_string, is_prefix):
    # my_string의 앞부분을 is_prefix 길이만큼 자른 것과 비교
    if my_string[:len(is_prefix)] == is_prefix:
        return 1
    return 0