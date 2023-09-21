/*
Implement a function that adds two numbers together and returns their sum in binary.
The conversion can be done before, or after the addition.

The binary number returned should be a string.
*/
#include<iostream>
#include<string>
#include<cstdint>


std::string add_binary(uint64_t a, uint64_t b) {
    
    a += b;
    std::string output;
    do
    {
        output = std::to_string(a % 2)+output;
        a /= 2;
    } while (a > 0);
    return output;
}

int main()
{
   std::cout<<add_binary(5, 9);
}