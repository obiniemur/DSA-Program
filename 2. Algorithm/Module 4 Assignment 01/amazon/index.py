def sortPermutation(p, moves):
    # Helper function to calculate the minimum number of swaps needed to sort the permutation
    def min_swaps_needed(p):
        visited = [False] * len(p)
        swaps = 0
        
        for i in range(len(p)):
            if visited[i] or p[i] == i + 1:
                continue
            
            # Find the cycle starting from i
            cycle_length = 0
            x = i
            while not visited[x]:
                visited[x] = True
                x = p[x] - 1  # Move to the next index in the cycle
                cycle_length += 1
            
            if cycle_length > 1:
                swaps += cycle_length - 1
        
        return swaps

    # Calculate the minimum swaps needed to sort the permutation
    min_swaps = min_swaps_needed(p)

    # Generate the binary string based on whether moves[i] matches min_swaps
    result = []
    for move in moves:
        if move >= min_swaps:
            result.append('1')
        else:
            result.append('0')

    return ''.join(result)

# Example usage
p = []
moves = [2, 3]
print(sortPermutation(p, moves))  # Output: "10"
