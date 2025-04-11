---
layout: page
title: Is Unique
---

Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures? 


```c++
bool is_unique(std::string str)
{
    if(str.length() > 128)
        return false;
    
    std::vector<bool> char_check(128, false);

    for(int i=0; i<str.length(); i++)
    {
        if(char_check[str[i]])
        {
            return false;
        }
        else
        {
            char_check[str[i]] = true;
        }
    }
    
    return true;
}
```
