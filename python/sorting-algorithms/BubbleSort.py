data = [7,5,6,2,1]

# get data length
n = len(data)

# outer loop
for i in range(n-1):

    # inner loop
    for j in range(n-i-1):
        
        # If element to the left is greater than the element to the right
        if data[j] > data[j+1]:
            
            # swap
            data[j], data[j+1] = data[j+1], data[j]

# print sorted array
print("Sorted array:", data)
