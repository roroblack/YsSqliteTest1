def solution(my_string, overwrite_string, s):
    answer = my_string
    
    end_idx = s + len(overwrite_string)
    
    answer = my_string[:s] + overwrite_string + my_string[end_idx:]
    # answer_list = list(my_string)
    # for idx, ch in enumerate(overwrite_string):
    #     answer_list[s + idx] = overwrite_string[idx]
    # answer = "".join(answer_list)
    return answer