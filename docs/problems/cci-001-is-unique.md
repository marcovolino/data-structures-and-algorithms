---
layout: page
title: Is Unique
---

**Implement an algorithm to determine if a string has all unique characters.**


**Example 1**
- Input: abcd
- Output: True
- Explanation: No characters are repeated, therefore the string contains unique characters

**Example 2**
- Input: abccd
- Output: False
- Explanation: Character 'c' is repeated, therefore the string does not contains unique characters

### C++ Implementation 

```c++
/**
 * Function to determine if a string contains unique characters
 */
bool is_unique(std::string str)
{
    // If length is greater than 128 then there must be repeating chars as there are only 128 chars in standard ASCII
    if(str.length() > 128)
        return false;
    
    // init bool array of length 128 to track if a char has been used, with the index being the standard ASCII number
    std::vector<bool> char_check(128, false);

    // Go through all chars in the string
    for(int i=0; i<str.length(); i++)
    {
        // Check if char exists in bool array
        if(char_check[str[i]])
        {
            return false;
        }
        else
        {
            // If does not exist set bool at index to True
            char_check[str[i]] = true;
        }
    }
    // return true as the whole sting has now been processed without encoutering a repeated char
    return true;
}
```



### Python Implementation 


```python
#
# Function to determine if a string contains unique characters
#
def is_unique(str):
    
    # If length is greater than 128 then there must be repeating chars as there are only 128 chars in standard ASCII
    if len(str) > 128:
        return False
    
    # Init bool array of length 128 to track if a char has been seen, with the index being the standard ASCII number
    char_check = [False] * 128
    
    # Go through all chars in the string
    for i in range(0, len(str)):
        
        # convert the char into standard ASCII using the ord() function
        val = ord(str[i])
        
        # Check if char exists in bool array
        if char_check[val]:
            # if exists then return false as not unique
            return False
        else:
            # if does not exist set bool at index val to True
            char_check[val] = True
    
    # return true as the whole string has now been processed without encountering a repeated char
    return True
```

