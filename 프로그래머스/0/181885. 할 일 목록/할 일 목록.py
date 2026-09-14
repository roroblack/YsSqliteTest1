def solution(todo_list, finished):
    return [work for work, is_done in zip(todo_list, finished) if not is_done]