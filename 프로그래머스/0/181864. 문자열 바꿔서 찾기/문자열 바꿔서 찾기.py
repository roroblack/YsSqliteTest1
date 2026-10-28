def solution(myString, pat):
    # A와 B를 서로 교환
    converted = myString.translate(str.maketrans({'A': 'B', 'B': 'A'}))
    
    # pat가 존재하면 1, 없으면 0
    return 1 if pat in converted else 0