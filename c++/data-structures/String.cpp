
#include <iostream>
#include <cstring>
#include <stdexcept>

// Basic String class
class String
{

private:

    // stores the data as a char[]
    char* m_data;
    
    // variable to keep track of the size of a string
    unsigned int m_size;


public:

    //
    String():m_data(new char[1]{'\0'}),m_size(0){}
    
    // destructor
    ~String()
    {
        // delete data
        delete[] m_data;
    }
    
    //get the length of the string
    unsigned int get_length()
    {
        // return m_size
        return m_size;
    }
    
    //Append function
    void append(const String str)
    {
        unsigned int new_length = m_size + str.get_length();
        
        
        
    }
    
    // Concatanate
    String operator+(String& otherString)
    {
        
    }
    
    //Access element
    char operator[](int index)
    {
        // check index is within expected size
        if (index >= m_size)
        {
            throw std::out_of_range("Attempting to access index outside the scope of the String");
        }
        
        // Return char
        return m_data[index];
    }
    
    // return sub string, starting at start_index and ending and end_index
    String get_substring(unsigned int start_index, unsigned int end_index)
    {
        // check index is within expected size
        if (end_index >= m_size)
        {
            throw std::out_of_range("Attempting to access index outside the scope of the String");
        }
        
    }
    
    bool find(String s)
    {
        
        
    }
    
    // Print String
    void print()
    {
        //
        std::cout << m_data << std::endl;
    }
}
