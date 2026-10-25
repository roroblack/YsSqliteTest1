def solution(myString):
    # 'x'로 분리 후 빈 문자열이 아닌 것만 골라 사전순 정렬
    return sorted([sub for sub in myString.split('x') if sub])