def getMaxNegativePnL(PnL):
    n = len(PnL)

    # Step 1: Calculate the initial cumulative PnL
    cumulative_pnl = [0] * n
    cumulative_pnl[0] = PnL[0]
    
    for i in range(1, n):
        cumulative_pnl[i] = cumulative_pnl[i - 1] + PnL[i]

    # Step 2: Sort the positive PnL values based on their magnitude (smallest first)
    # Only flip positive values, since we want to introduce more negatives
    positives = []
    for i in range(n):
        if PnL[i] > 0:
            positives.append((PnL[i], i))
    
    # Sort positive values by their absolute magnitude
    positives.sort(key=lambda x: x[0])

    # Step 3: Try flipping the smallest positive values to negative
    flips = 0
    current_cumulative = cumulative_pnl[:]
    
    for pos_value, index in positives:
        # Flip the positive value to negative
        PnL[index] = -PnL[index]  # Flip
        
        # Recalculate cumulative sum after the flip
        cumulative_pnl[0] = PnL[0]
        valid_flip = True
        for i in range(1, n):
            cumulative_pnl[i] = cumulative_pnl[i - 1] + PnL[i]
            if cumulative_pnl[i] <= 0:
                valid_flip = False
                break
        
        # If the flip is valid, increase the flip count
        if valid_flip:
            flips += 1
        else:
            # If flipping this positive results in non-positive cumulative sum, stop
            PnL[index] = -PnL[index]  # Revert the flip
            break
    
    return flips

# Test case
PnL = [5, 1, 1, 1, 1, 1]
result = getMaxNegativePnL(PnL)
print(result)  # Expected output: 2
