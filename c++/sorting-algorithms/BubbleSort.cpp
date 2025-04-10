// includes
#include <iostream>
#include <array>

int main()
{
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
    
    return 0;
}
