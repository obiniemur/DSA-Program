
input = [5, 3, 5, 2, 6]


mid_index = int(len(input)/2)
flag =False
beforeSum = 0
afterSum = 0

for i in range(0, mid_index):

    beforeSum += input[i]

for i in range(mid_index, len(input)):

    afterSum += input[i]

while flag != True:


    if beforeSum == afterSum:
        break

    elif beforeSum > afterSum:

        mid_index = mid_index - 1

        beforeSum -= input[mid_index-1]

        afterSum += input[mid_index]

    elif beforeSum < afterSum:

        mid_index = mid_index + 1

        beforeSum += input[mid_index]

        afterSum -= input[mid_index + 1]

print(mid_index)

 