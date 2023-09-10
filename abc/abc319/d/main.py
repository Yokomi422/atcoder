def check_fits(width, M, word_lengths):
    lines = 1
    line_length = 0

    for length in word_lengths:
        if line_length + length > width:
            lines += 1
            line_length = length
        else:
            line_length += length

        line_length += 1

        if lines > M:
            return False

    return True


def find_minimum_width(N, M, word_lengths):
    low = max(word_lengths)
    high = sum(word_lengths) + N - 1

    while low < high:
        mid = (low + high) // 2
        if check_fits(mid, M, word_lengths):
            high = mid
        else:
            low = mid + 1

    return low


N, M = map(int, input().split())
word_lengths = list(map(int, input().split()))

result = find_minimum_width(N, M, word_lengths)
print(result)
