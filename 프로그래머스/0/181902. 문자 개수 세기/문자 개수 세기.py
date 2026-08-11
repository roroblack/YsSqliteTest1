def solution(my_string):
    # 길이 52짜리 배열을 0으로 초기화
    answer = [0] * 52
    
    for ch in my_string:
        # 대문자인 경우 ('A'~'Z' -> 인덱스 0~25)
        if 'A' <= ch <= 'Z':
            idx = ord(ch) - ord('A')
            answer[idx] += 1
        # 소문자인 경우 ('a'~'z' -> 인덱스 26~51)
        elif 'a' <= ch <= 'z':
            idx = ord(ch) - ord('a') + 26
            answer[idx] += 1
            
    return answer