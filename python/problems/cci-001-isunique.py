
#
# Function to determine if a string contains unique characters
#
def is_unique(str):
    
    # If length is greater than 128 then there must be repeating chars as there are only 128 chars in unicode
    if len(str) > 128:
        return False;
    
    # Init bool array of length 128 to track if a char has been seen, with the index being the unicode number
    char_check = [False] * 128
    
    # Go through all chars in the string
    for i in range(0, len(str)):
        
        # convert the char into unicode using the ord() function
        val = ord(str[i])
        
        # Check if char exists in bool array
        if char_check[val]:
            # if exists then return false as not unique
            return False
        else:
            # if does not exists set bool at index val to True
            char_check[val] = True
    
    # return true as the whole sting has now been processed without encoutering a repeated char
    return True


#
# Main Program
#
str = "abcdefghijklmnopqrstuvwxyz";

if is_unique(str):
    print("Unique")
else:
    print("Not Unique")
    
