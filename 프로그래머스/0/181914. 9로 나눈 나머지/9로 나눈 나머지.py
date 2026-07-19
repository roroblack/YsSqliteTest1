def solution(number):
    answer = 0
    iNum = 0
    
    # number의 길이만큼 인덱스로 돕니다.
    for idx in range(len(number)):
        # 팩트: 파이썬은 아스키코드를 뺄 필요 없이 int()를 쓰면 문자가 바로 숫자가 됩니다.
        iNum += int(number[idx])

    answer = iNum % 9
    
    return answer
