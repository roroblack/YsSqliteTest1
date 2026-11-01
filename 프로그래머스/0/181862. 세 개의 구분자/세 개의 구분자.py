def solution(myStr):
    # 'a', 'b', 'c'를 공백으로 치환
    myStr = myStr.replace('a', ' ').replace('b', ' ').replace('c', ' ')
    
    # 연속된 공백을 기준으로 분리하여 빈 문자열 자동 제거
    answer = myStr.split()
    
    # 비어있으면 ["EMPTY"] 반환
    return answer if answer else ["EMPTY"]