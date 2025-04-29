#include <iostream>
#include <vector>


/**
 * Function to determine if a string contains unique characters
 */
bool is_unique(std::string str)
{
    // If length is greater than 128 then there must be repeating chars as there are only 128 chars in unicode
    if(str.length() > 128)
        return false;
    
    // init bool array of length 128 to track if a char has been used, with the index being the unicode number
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



int main()
{
    //
    std::string str = "abcdefghijklmnopqrstuvwxyz";

    if(is_unique(str))
    {
        std::cout << "Unique" <<std::endl;
    }
    else
        {
        std::cout << "Not Unique" <<std::endl;
    }
    

    return 0;
}
