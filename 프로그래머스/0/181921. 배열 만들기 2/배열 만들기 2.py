def solution(l, r):
    answer = []
    
    # 1부터 63까지 돌리는 이유: bin(63)[2:]은 '111111' -> '555555'가 되어 100만 이하를 전부 커버함
    for i in range(1, 64):
        # 1. 정수 i를 이진수 문자열로 변환 (예: 5 -> '0b101' -> 앞의 '0b'를 잘라내서 '101')
        binary_str = bin(i)[2:]
        
        # 2. 이진수 문자열의 모든 '1'을 '5'로 교체 (예: '101' -> '505')
        replaced_str = binary_str.replace('1', '5')
        
        # 3. 문자열을 실제 정수(int)로 변환 (예: '505' -> 505)
        num = int(replaced_str)
        
        # 4. 생성된 숫자가 문제에서 요구한 l 이상 r 이하의 범위에 있으면 정답에 추가
        if l <= num <= r:
            answer.append(num)
            
    # 만약 범위 내에 해당하는 숫자가 하나도 없어서 answer가 비어있다면 [-1] 반환
    if not answer:
        return [-1]
        
    # 이미 1부터 순서대로 만들었기 때문에 오름차순 정렬도 자동으로 되어있음
    return answer