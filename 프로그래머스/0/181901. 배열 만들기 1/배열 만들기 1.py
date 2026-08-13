def solution(n, k):
    # k부터 n까지 k씩 증가하는 배수를 리스트로 만들어 반환
    return list(range(k, n + 1, k))