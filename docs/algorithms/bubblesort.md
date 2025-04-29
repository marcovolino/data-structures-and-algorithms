---
layout: page
title: Bubble Sort
---
Bubble Sort is a simple, comparison-based algorithm that repeatedly steps through a list, compares adjacent elements, and swaps them if they are in the wrong order. 
This process is repeated until the list is sorted, with larger elements "bubbling" to the end in each pass, hence the name bubble sort. 
It has a worst-case and average time complexity of O(n²), making it inefficient on large datasets, and a best-case time complexity of O(n) if the list is already sorted and has early stopping implemented. 
It has a space complexity of O(1) as the operations happen in-place.

## Pseudocode
```
procedure bubbleSort(array):
    n = length of array
    for i from 0 to n - 1:
        for j from 0 to n - i - 2:
            if array[j] > array[j + 1]:
                swap array[j] and array[j + 1]
```
## Algorithm Example
**Input**: [4,3,7,5,1]

| Outer Loop  | Inner Loop | Initial State | Swap? | Result |
|:-----------:|:----------:|:-------------:|:-----:|:-------------:|
|      0      |      0     |  [**4,3**,7,5,1]  |  swap | [**3,4**,7,5,1] |
|      0      |      1     |  [3,**4,7**,5,1]  |       | [3,**4,7**,5,1] |
|      0      |      2     |  [4,3,**7,5**,1]  |  swap | [3,4,**5,7**,1] |
|      0      |      3     |  [3,4,5,**7,1**]  |  swap | [3,4,5,**1,7**] |
|      1      |      0     |  [**3,4**,5,1,7]  |       | [**3,4**,5,1,7] |
|      1      |      1     |  [3,**4,5**,1,7]  |       | [3,**4,5**,1,7] |
|      1      |      2     |  [3,4,**5,1**,7]  |  swap | [3,4,**1,5**,7] |
|      2      |      0     |  [**3,4**,1,5,7]  |       | [**3,4**,1,5,7] |
|      2      |      1     |  [3,**4,1**,5,7]  |  swap | [3,**1,4**,5,7] |
|      3      |      0     |  [**3,1**,4,5,7]  |  swap | [**1,3**,4,5,7] |

**Output**: [1,3,4,5,7]

## C++ Implementation
```c++
//Data
std::array<int,5> data = {7,5,6,2,1};

//get data length
int n = data.size();

// Outer Loop
for(int i=0; i<n-1; i++)
{
    // inner loop
    for(int j=0; j< n-i-1; j++)
    {
        // If element to the left is greater than the element to the right
        if(data[j] > data[j+1])
        {
            // then swap via a temp variable
            int temp =data[j];
            data[j] =data[j+1];
            data[j+1] = temp;
        }
    }
}

//Print result
std::cout <<"Sorted Array: ";
for(int i=0; i<data.size(); i++)
{
    // print
    std::cout << data[i] << " ";
}
std::cout << std::endl;
```

## Python Implementation
```python
# data
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
```

## Summary
Bubble Sort is a great algorithm for learning the fundamentals of sorting due to its simplicity. 
While it's not efficient for large datasets, it's useful for understanding how sorting works at a basic level. 
Its main advantages are ease of implementation and in-place operation, while its downside is poor performance with large or unsorted data.



