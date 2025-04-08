#include <iostream>
#include <stdexcept>

//
// Templated dynamic array class
//
template <typename T>
class DynamicArray
{
    
private:
    
    // Array data
    T* m_data;
    
    // Keeps track of the capactiy of the array
    unsigned int m_capacity;
    
    // Keeps track of the number of elements
    unsigned int m_size;
    
    // function to resize array
    void resize(int new_capacity)
    {
        // Declare new array at new capacity
        T* new_data = new T[new_capacity];
    
        // Copy data from old array to new array
        for(int i=0; i<m_size; i++)
        {
            new_data[i] = m_data[i];
        }
        
        // Delete old array
        delete[] m_data;
        
        // assign new data to internal data storage
        m_data = new_data;
        
        // Update capacity
        m_capacity = new_capacity;
    }
    
public:
        
    // Declare constructor
    DynamicArray<T>(int capacity = 4): m_size(0),m_capacity(capacity)
    {
        // initialise array to capacity
        m_data = new T[m_capacity];
    }
    
    // Declare destructor
    ~DynamicArray<T>()
    {
        // Delete data
        delete[] m_data;
    }
    
    // adds element to the end of the array
    void append(T data)
    {
        // If the array is full, then resize the array to double its capacity
        if (m_size == m_capacity)
        {
            resize(m_capacity*2);
        }
        
        // append data to the end of the arrary and then increment the size
        m_data[m_size++] = data;
    }
    
    // inserts an element at a defined index in the array
    void insert(T data, unsigned int index)
    {
        // check index is within expected size
        if (index >= m_size)
        {
            throw std::out_of_range("Attempting to insert index outside the scope of the array");
        }
        
        // Assign value at index
        m_data[index] = data;
    }
    
    
    // remove an element at a specfied index
    void remove(unsigned int index)
    {
        // check index is within expected size
        if (index >= m_size)
        {
            throw std::out_of_range("Attempting to remove index outside the scope of the array");
        }
        
        // starting at index, shift all elements down by one
        for(int i=index; i<m_size; i++)
        {
            m_data[i] = m_data[i+1];
        }
        
        // reduce size by 1
        m_size--;
        
    }
    
    // return the element at an index
    T get(unsigned int index)
    {
        // check index is within expected size
        if (index >= m_size)
        {
            throw std::out_of_range("Attempting to get index outside the scope of the array");
        }
        
        // Return element
        return m_data[index];
    }
    
    // return the size of the array
    unsigned int get_size()
    {
        return m_size;
    }
    
    // return the capcaity of the array
    unsigned int get_capacity()
    {
        return m_capacity;
    }
    
    // Function to print elements - Warning assumes the type has a print function
    void print()
    {
        // Start with square bracket
        std::cout << "[";
        
        // For each element print with a trailing comma if not the first element
        for (int i=0; i<m_size; i++)
        {
            if(i == 0)
                std::cout << m_data[i];
            else
                std::cout << "," << m_data[i];
        }
        
        // End with a closing square and newline
        std::cout << "]" << std::endl;
    }
    
    
};



int main()
{
    // Create instance
    DynamicArray<int> arr;
    
    // Append and print
    arr.append(3);
    std::cout << "arr.get_size()=" << arr.get_size() << " arr.get_capacity()=" <<arr.get_capacity() << std::endl;
    // Append and print
    arr.append(4);
    std::cout << "arr.get_size()=" << arr.get_size() << " arr.get_capacity()=" <<arr.get_capacity() << std::endl;
    // Append and print
    arr.append(7);
    std::cout << "arr.get_size()=" << arr.get_size() << " arr.get_capacity()=" <<arr.get_capacity() << std::endl;
    // Append and print
    arr.append(2);
    std::cout << "arr.get_size()=" << arr.get_size() << " arr.get_capacity()=" <<arr.get_capacity() << std::endl;

    // Append and print - check capacity
    arr.append(1);
    std::cout << "arr.get_size()=" << arr.get_size() << " arr.get_capacity()=" <<arr.get_capacity() << std::endl;
    arr.print();
    
    // Remove data and print
    arr.remove(2);
    std::cout << "arr.get_size()=" << arr.get_size() << " arr.get_capacity()=" <<arr.get_capacity() << std::endl;
    arr.print();
    
    // insert and print
    arr.insert(100,2);
    arr.print();
    
    // example of get
    std::cout << "arr.get(3)=" << arr.get(3) << std::endl;
    
    
    return 0;
}
