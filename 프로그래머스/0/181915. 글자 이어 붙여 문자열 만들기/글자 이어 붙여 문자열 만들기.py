def solution(my_string, index_list):
    answer = ''
    for idx in range(0, len(index_list)):
        target_idx = index_list[idx]
        answer += my_string[target_idx]
    return answer