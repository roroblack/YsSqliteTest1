def solution(my_string, s, e):
    # s 전까지 + (s부터 e까지 뒤집은 것) + e 이후부터
    return my_string[:s] + my_string[s : e + 1][::-1] + my_string[e + 1 :]