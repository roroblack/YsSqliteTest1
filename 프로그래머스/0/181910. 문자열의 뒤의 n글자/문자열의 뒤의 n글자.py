def solution(my_string, n):
    answer = ''
    # for idx in range(len(my_string) - n, len(my_string)):
        # answer.append(my_string[idx])
        
    answer = my_string[len(my_string) - n : len(my_string)]
    return answer