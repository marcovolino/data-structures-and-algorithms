# Arrays
An array is a data structure that stores elements in a fixed-size, contiguous block of memory, shown below. Each element in the array is of the same data type and can be accessed directly using an index, typically starting from zero. Arrays allow fast access, O(1),  to elements but have fixed size, meaning resizing requires the creation of a new array. They are ideal for storing ordered data like lists of numbers, characters, or objects. However, inserting or deleting elements in the middle can be costly, O(n), since it may require shifting elements. 




![Image of an Array](image/array.png)

## Array examples in c++
Arrays can be implemented in c++ using the following [] notation, as shown below:

```c++
// Declare Array
int myArray[5] = {3,4,7,2,1};

// Access element with operator[]
std::cout << myArray[0] << std::endl;
Output: 3

// get size of array
std::cout << "myArray contains " << sizeof(myArray)/sizeof(int) << " elements." << std::endl;
Output: myArray contains 5 elements
```

The C++ Standard Template Library also include an array data structure 

```c++
// Declare Array
std::array<int,5> myArray = {3,4,7,2,1};

//Access element with operator[]
std::cout << myArray[0] << std::endl;
Output: 3	

// Get size of array
std::cout << "myArray contains " << myArray.size() << " elements." << std::endl;
Output: myArray contains 5 elements
```

## Arrays in python

```python
# Declare Array 
myArray = [3,4,7,2,1]
	
# Access element
print(myArray[0])

# get length of array
print(“myArray contains ” + len(myArray) + “ elements”)
Output: myArray contains 5 elements
```
	

In python, arrays also include functions to append and extend

```python
# Declare Array 
myArray = [3,4,7,2,1]

# Append element
myArray.append(5)

# Print Array contents
print(myArray)
Output: [3,4,7,2,1,5] 

```

Arrays can also be appended to array

```python
# Declare Array 
myArray = [3,4,7,2,1]

# Declare second array 
myArray2 = [6,8]

# Append myArray2 to myArray 
myArray.append(myArray2)

# Print Array
print(myArray) 

Output: [3,4,7,2,1,5,[6,8]]
```

Here we have appended myArray2 as an element within myArray. This occurs as python uses dynamic typing, where types are determined at runtime. In contrast C++ uses static typing where the type of every variable must be known at compile time.


Here the extend function is used to correctly append the elements of myArray2 to myArray

```python
# Declare Array 
myArray = [3,4,7,2,1]

# Declare second array 
myArray2 = [6,8]

# Append myArray2 to myArray 
myArray.extend(myArray2)

# Print Array
print(myArray) 

Output: [3,4,7,2,1,5,6,8]
```



